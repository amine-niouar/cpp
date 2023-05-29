/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:56:26 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 20:25:40 by aniouar          ###   ########.fr       */
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

bool btc::isValidDate(int year, int month, int day) 
{
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
    int year;
    int month;
    int day;
    
    std::istringstream iss(date);
    iss >> year >> month  >> day;
}


void btc::iterate()
{
    std::string key;
    std::string sep;
    std::string value_str;
    double value;
    int i(0);

    //checking header

    std::string line;
    while(std::getline(readHandle,line))
    {
        try
        {
            std::istringstream iss(line);
            iss >> key >> sep >>  value_str;
        
            if(!(value_str == "" and key == "" and sep == ""))
            {
                std::cout << key << " " << sep << " " << value_str << std::endl;
                if(i == 0 && !checkHeader(line))
                    throw std::runtime_error("header error");
                if(i > 0)
                {
                    if(value_str == "" or key == "" or sep == "")        
                    throw std::runtime_error("invalid syntax");
                    value = get_val(value_str);
                    checkValue(value);
                }
            }
        }
        catch(std::exception &e)
        {
             std::cerr << e.what() << std::endl;
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