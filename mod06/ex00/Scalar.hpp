/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:47:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 19:21:16 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <stdlib.h>
#include <limits.h>
#include <iostream>

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class Scalar
{
    private:
        Scalar(); 
        ~Scalar();
    public:
       
        static bool check_in(double numeric);
        // static void checking_zero(int & size,std::string &str,double & numeric,int &valid);
        // static void checking_float(std::string &str,char *rest, int &valid,double &numeric);
        // static void checking_double(std::string &str,double &numeric,double &fract_part,int &valid);
        // static void checking_integer(int &valid);
        // static void checking_char(std::string &str, int &size, int &valid);
        static void cs(double  num,double fract_part,double integer_part);
        static void impossible(char *rest,int & size,int & valid);
        static void convert(std::string &s);
        
};
