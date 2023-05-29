/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:55:03 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 20:17:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <map>
#include <cmath>
#include <sstream>
#include<fstream>


class btc
{
    private:
        std::fstream readHandle;
        std::string input;
    public:
        class InError : public std::exception
        {
            public:
               
                 const char* what() const throw() 
                 { return " Cant load input ";};
        };
        void checkValue(double &val);
        double get_val(std::string &value_str);
        bool checkHeader(std::string &line);
        bool isValidDate(int year, int month, int day);
        btc(std::string &input_str);
        void iterate();
        //std::map<std::string,double>&  getData() ;
        ~btc();
};