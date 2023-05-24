/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/23 10:24:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"


Scalar::Scalar()
{

}

Scalar::Scalar(Scalar &s)
{
    (void)s;
}

Scalar& Scalar::operator=(Scalar& s)
{
    if(this != &s)
        ;
    return (*this);
}

 bool Scalar::check_in(double numeric)
{
    if(numeric == -HUGE_VAL or numeric == HUGE_VAL)
        return (true);
    if(numeric == nanf("") or numeric == nan(""))
        return (true);
    return (false);
}

 void Scalar::print(double  num,double fract_part,double integer_part)
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
        
        if(fract_part == 0 && check_in(integer_part) == false)
        {
            if(f != HUGE_VAL && f != -HUGE_VAL)
                std::cout << "float: " << f << ".0f\n";
            else
                std::cout << "float: " << f << "f\n";
            std::cout << "double: " << dd <<  ".0\n";
        }
        else
        {
            std::cout << "float: " << f << "f\n";
            std::cout << "double: " << dd <<  "\n";
        }
            
}



 void Scalar::convert(std::string &str)
{
    char *rest;
    double numeric;
    double fract_part;
    double integer_part;
    int size;

    size = str.length();
    numeric = std::strtod(str.c_str(),&rest);
    fract_part = modf(numeric,&integer_part);

    if((strlen(rest) > 0 and strcmp(rest,"f") != 0 and size > 1) or (size == 0))
    {
            std::cout << "char: impossible"   << '\n';
            std::cout << "int: impossible" << '\n';
            std::cout << "float: impossible" << '\n';
            std::cout << "double: impossible" << '\n';
           return;
    }

    //  zero
    if((size == 1 and str[0] == '0'))
    {
        print(0,fract_part,integer_part);
       return;
    }
    
    // char         
    if(size == 1 && integer_part == 0 && fract_part == 0)
    {
      
        
        char t = (char)str[0];
        print((int)t,fract_part,integer_part);
        return;
    }
    //  float
    if(strcmp(rest,"f") == 0)
    {
        print(numeric,fract_part,integer_part);
        return;
    }

      //  double
    if(fract_part != 0)
    {

        print(numeric,fract_part,integer_part);
        return;
    }
    // integer
    if(fract_part == 0 && integer_part != 0)
    {
        print(integer_part,fract_part,integer_part);
        return;
    }
    
   
}



Scalar::~Scalar()
{
    
}
