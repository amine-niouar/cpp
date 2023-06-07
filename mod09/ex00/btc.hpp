/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:55:03 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 13:34:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <map>
#include <cmath>
#include <string>
#include <istream>
#include <sstream>
#include<fstream>


class btc
{
    private:
        std::fstream readHandle;
        std::string input;
    public:
        btc();
        btc(btc &c);
        btc& operator=(btc &b);
        void checkValue(double &val);
        double get_val(std::string &value_str);
        double getRate(std::string &date,std::map<std::string,double>& data);
        bool checkHeader(std::string &line);
        bool isValidDate(std::string values[]);
        void calculate(double &value,double &rate);
        void checkDate(std::string &date);
        btc(std::string &input_str);
        void iterate(std::map<std::string,double> &data);
        ~btc();
};