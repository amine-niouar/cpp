/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:56:26 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/30 17:02:57 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

btc::btc(std::string &input_str) : input(input_str)
{
    readHandle.open(input,std::ios::in);

     if(!readHandle.good())
        throw InError();
}


bool btc::checkHeader(std::string &line)
{
     std::istringstream iss(line);

    std::string key;
    std::string value;
    std::string sep;
    
    iss >> key >> sep >>  value;
   
    if(key == "date" && value == "value")
        return true;
    return false;
}

void btc::checkValue(double &val)
{
    // check integer
    double fract_part;
    double integer_part;
    
    fract_part = modf(val,&integer_part);

    if(fract_part == 0 and (integer_part < 0 or integer_part > 1000))
        throw std::runtime_error("Error : value out of range");

}

double btc::get_val(std::string &value_str)
{
    double value;
    char *rest;
    std::string tmp;
    
    value =  std::strtod(value_str.c_str(),&rest);
    tmp = rest;
    if(tmp.size() > 0)
         throw std::runtime_error("Error : invalid value");
    return value;
}

bool btc::isValidDate(std::string values[]) 
{
    int year,month,day;
    std::istringstream iss1(values[0]),iss2(values[1]),iss3(values[2]);

    iss1 >> year;
    iss2 >> month;
    iss3 >> day;
    
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29) {
                return false;
            }
        } else {
            if (day > 28) {
                return false;
            }
        }
    }

    return true;
}

void btc::checkDate(std::string &date)
{
    std::string d[3];
    char sep = '-';
    int i(-1);
    
    std::istringstream iss(date);

  

    while(std::getline(iss,d[++i],sep))
    {
        if(!(d[i].find_first_not_of( "0123456789" ) == std::string::npos))
            throw std::runtime_error("Invalid numeric value date");
    }
    if(i != 3)
        throw std::runtime_error("Invalid syntax date");
       
 

    if(!isValidDate(d))
        throw std::runtime_error("Invalid date");
}

void btc::calculate(double &value,double &rate)
{
    std::cout << "= " << (value * rate) << std::endl;
}

double btc::getRate(std::string &date,std::map<std::string,double>& data)
{
    std::map<std::string,double>::iterator itlow,itfind;

    itfind = data.find(date);
    if(itfind == data.end())
    {
         itlow = data.lower_bound(date);

         return (itlow->second);
    }
    return (itfind->second);
}


void btc::iterate(std::map<std::string,double>& data)
{
    std::string key;
    std::string sep;
    std::string value_str;
    double value,rate;
    int i(0);


    std::string line;
    while(std::getline(readHandle,line))
    {
        try
        {
            std::istringstream iss(line);
            iss >> key >> sep >>  value_str;
        
            if(!(value_str == "" and key == "" and sep == ""))
            {
               
                if(i == 0 && !checkHeader(line))
                    throw std::runtime_error("header error");
                if(i > 0)
                {
                    if(value_str == "" or key == "" or sep == "")        
                    throw std::runtime_error("invalid syntax");
                    value = get_val(value_str);
                    checkValue(value);
                    checkDate(key);
                     std::cout << key << " => " << value_str << " ";
                     rate = getRate(key,data);
                    calculate(value,rate);
                     //std::cout << std::endl;;
                }
            
               
            }
        }
        catch(std::exception &e)
        {
             std::cerr /*<< std::endl*/ <<  e.what() << std::endl;
        }
        key = "";
        sep = "";
        value_str = "";
        i++;
    }
        
}



btc::~btc()
{
    
}