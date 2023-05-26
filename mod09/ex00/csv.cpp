/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csv.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:55:26 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/26 20:24:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csv.hpp"



csv::csv(std::string db_str) : dB(db_str)
{
    readHandle.open(db_str,std::ios::in);

     if(!readHandle.good())
        throw InError();
}

void csv::loadData()
{
    std::string line;
     size_t pos;
   
    

    while(std::getline(readHandle,line))
    {
        pos = line.find(",");

        if (pos != std::string::npos)
        {
            std::string date = line.substr(0,pos);
            std::string value = line.substr(pos+1);
            

        std::cout << date << "," << value << std::endl;
        }
    }
}

std::map<std::string,double>  csv::getData() const 
{
    return (data);
}

csv::~csv()
{
    
}