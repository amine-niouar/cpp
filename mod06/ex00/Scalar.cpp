/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/18 19:15:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar()
{
    f_science[0] = "-inff";
    f_science[1] = "+inff";
    f_science[2] = "nanf";
    d_science[0] = "-inf";
    d_science[1] = "+inf";
    d_science[2] = "nan";
    v_science[0] = -HUGE_VAL;
    v_science[1] = HUGE_VAL;
    v_science[2] =  nanf("");
    vd_science[0] = -HUGE_VAL;
    vd_science[1] = HUGE_VAL;
    vd_science[2] =  nan("");
    fract_part = 0;
    integer_part = 0;
}

int Scalar::check_in(std::string & s,std::string science[])
{
    int i(-1);
    

    while(++i < 3)
    {
        if(s == science[i])
            return (i);
    }
    return (-1);
}

void Scalar::cs(double  num,int science)
{

    
          double dd = static_cast<double>(num);
          float f = static_cast<float>(num);
          int i = static_cast<int>(num);
          char c = static_cast<char>(num);
        

         if(dd >= 0 and dd <= 255)
        {
            if((c >= 0 and c <= 32) or c < 0)
                std::cout << "char: Non displayable"   << '\n';
            else
                 std::cout << "char: " << c  << '\n';
        }
        else
             std::cout << "char: impossible"   << '\n';
        if(dd >= INT_MIN && dd <= INT_MAX)
            std::cout << "int: " << i << '\n';
        else
             std::cout << "int: impossible"   << '\n';
        
        if(fract_part == 0 && science == 0)
        {
             std::cout << "float: " << f << ".0f\n";
            std::cout << "double: " << dd <<  ".0\n";
        }
        else
        {
            std::cout << "float: " << f << "f\n";
            std::cout << "double: " << dd <<  "\n";
        }
            
}

void Scalar::impossible(char *rest,int & size,int & valid)
{
    if((strlen(rest) > 0 and strcmp(rest,"f") != 0) or (size == 0))
    {
            std::cout << "char: impossible"   << '\n';
            std::cout << "int: impossible" << '\n';
            std::cout << "float: impossible" << '\n';
            std::cout << "double: impossible" << '\n';
            valid = 1;
    }
}

void Scalar::checking_zero(int & size,std::string &str,double & numeric,int &valid)
{
    if(valid)
        return;
    
    if((size == 1 and str[0] == '0') or numeric == 0)
    {
         std::cout <<GREEN<< "int" << RESET <<  std::endl;
        cs(0,0);
        valid = 1;
    }         
           
}

void Scalar::checking_float(std::string &str,char *rest, int &valid,double &numeric)
{
     if(valid)
        return;
    int idxf;

    idxf = check_in(str,f_science);
    if(strcmp(rest,"f") == 0 or idxf >= 0)
    {
          std::cout <<GREEN<< "float" << RESET <<  std::endl;
            if(idxf >= 0)
                cs(v_science[idxf],1);
            else
                cs(numeric,0);
            
            valid = 1;
    }
}

void Scalar::checking_double(std::string &str, double &numeric,int &valid)
{
    if(valid)
        return;
    int idxd;

    idxd = check_in(str,d_science);
    if(fract_part != 0 or idxd >= 0)
    {
         std::cout <<GREEN<< "double" << RESET <<  std::endl;
            if(idxd >= 0)
                cs(vd_science[idxd],1);
            else
                cs(numeric,0);
         valid = 1;
    }
}

void Scalar::checking_integer(int &valid)
{
    if(valid)
        return;
     if(fract_part == 0 && integer_part != 0)
        {
            std::cout <<GREEN<< "int" << RESET <<  std::endl;
            cs(integer_part,0);
            valid = 1;
        }
}

void Scalar::checking_char(std::string &str, int &size, int &valid)
{
    if(valid)
        return;
    if(size == 1)
    {
        std::cout <<GREEN<< "char" << RESET <<  std::endl;
            char t = (char)str[0];
          cs((int)t,0);
        valid = 1;
    }
}

void Scalar::convert(std::string &str)
{
    char *rest;
    double numeric;
    int size;
    int valid(0);

    size = str.length();
    numeric = std::strtod(str.c_str(),&rest);
    fract_part = modf(numeric,&integer_part);

   
    
    impossible(rest,size,valid);
    checking_zero(size,str,numeric,valid);
    checking_float(str,rest,valid,numeric);
    checking_double(str,numeric,valid);
    checking_integer(valid);
    checking_char(str,size,valid);
}



Scalar::~Scalar()
{
    
}
