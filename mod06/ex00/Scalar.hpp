/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:47:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/18 19:12:15 by aniouar          ###   ########.fr       */
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
        std::string f_science[3];
        float v_science[3];
        std::string d_science[3];
        double vd_science[3];
        double fract_part;
        double integer_part;
    public:
        Scalar();
        int check_in(std::string & s,std::string science[]);
        void checking_zero(int & size,std::string &str,double & numeric,int &valid);
        void checking_float(std::string &str,char *rest, int &valid,double &numeric);
        void checking_double(std::string &str,double &numeric,int &valid);
        void checking_integer(int &valid);
        void checking_char(std::string &str, int &size, int &valid);
        void cs(double  num, int science);
        void impossible(char *rest,int & size,int & valid);
        void convert(std::string &s);
        ~Scalar();
};
