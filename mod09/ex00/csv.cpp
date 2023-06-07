/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csv.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:55:26 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 13:08:53 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csv.hpp"


csv::csv()
{
    
}

csv::csv(csv &c)
{
    data = c.data;
    dB = c.dB;
    readHandle.open(dB,std::ios::in);

    if(!readHandle.good())
        throw std::runtime_error("Cant load input");
}

 csv& csv::operator=(csv &c)
 {
    if(this != &c)
    {
        data = c.data;
        dB = c.dB;
        if(readHandle.is_open())
            readHandle.close();
        readHandle.open(dB,std::ios::in);

        if(!readHandle.good())
            throw std::runtime_error("Cant load input");
    }
    return (*this);
 }

csv::csv(std::string db_str) : dB(db_str)
{
    readHandle.open(db_str,std::ios::in);

     if(!readHandle.good())
        throw std::runtime_error("Cant load input");
}

void csv::loadData()
{
    std::string line;
     size_t pos;
     double tmp_val;
   
    if(!readHandle.is_open())
        throw std::runtime_error("Cant load input");
   
    while(std::getline(readHandle,line))
    {
        pos = line.find(",");
    
        if (pos != std::string::npos)
        {
            std::string date = line.substr(0,pos);
            std::string value = line.substr(pos+1);
            tmp_val = std::strtod(value.c_str(),0);
            if(date != "date")            
                  data[date] = tmp_val;
        }
    }
    readHandle.close();
}

std::map<std::string,double>&  csv::getData()  
{
    return (data);
}

csv::~csv()
{
    
}