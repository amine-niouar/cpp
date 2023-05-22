/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 19:19:06 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"


Scalar::Scalar()
{
    // fract_part = 0;
    // integer_part = 0;
}

 bool Scalar::check_in(double numeric)
{
    if(numeric == -HUGE_VAL or numeric == HUGE_VAL)
        return (true);
    if(numeric == nanf("") or numeric == nan(""))
        return (true);
    return (false);
}

 void Scalar::cs(double  num,double fract_part,double integer_part)
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

// void Scalar::impossible(char *rest,int & size,int & valid)
// {
//     if((strlen(rest) > 0 and strcmp(rest,"f") != 0 and size > 1) or (size == 0))
//     {
//             std::cout << "char: impossible"   << '\n';
//             std::cout << "int: impossible" << '\n';
//             std::cout << "float: impossible" << '\n';
//             std::cout << "double: impossible" << '\n';
//             valid = 1;
//     }
// }

// void Scalar::checking_zero(int & size,std::string &str,double & numeric,int &valid)
// {
//     if(valid)
//         return;
//     (void)numeric;
//     if((size == 1 and str[0] == '0'))
//     {
//          //std::cout <<GREEN<< "int" << RESET <<  std::endl;
//         cs(0);
//         valid = 1;
//     }         
           
// }

// void Scalar::checking_float(std::string &str,char *rest, int &valid,double &numeric)
// {
//      if(valid)
//         return;
//    (void)str;

//     //idxf = check_in(str,f_science);
//     if(strcmp(rest,"f") == 0)
//     {
//          // std::cout <<GREEN<< "float" << RESET <<  std::endl;
//                 cs(numeric);
            
//             valid = 1;
//     }
// }

// void Scalar::checking_double(std::string &str, double &numeric,int &valid)
// {
//     if(valid)
//         return;
//     (void)str;

//     if(fract_part != 0)
//     {
//         // std::cout <<GREEN<< "double" << RESET <<  std::endl;

//                 cs(numeric);
//          valid = 1;
//     }
// }

// void Scalar::checking_integer(int &valid)
// {
//     if(valid)
//         return;
//      if(fract_part == 0 && integer_part != 0)
//         {
//             //std::cout <<GREEN<< "int" << RESET <<  std::endl;
//             cs(integer_part);
//             valid = 1;
//         }
// }

// void Scalar::checking_char(std::string &str, int &size, int &valid)
// {
//     if(valid)
//         return;
//     if(size == 1 && integer_part == 0 && fract_part == 0)
//     {
      
//         //std::cout <<GREEN<< "char" << RESET <<  std::endl;
//         char t = (char)str[0];
//         cs((int)t);
//         valid = 1;
//     }
// }

 void Scalar::convert(std::string &str)
{
    char *rest;
    double numeric;
    double fract_part;
    double integer_part;
    int size;
    // int valid(0);

    size = str.length();
    numeric = std::strtod(str.c_str(),&rest);
    fract_part = modf(numeric,&integer_part);

    
    // impossible(rest,size,valid);
    // checking_zero(size,str,numeric,valid);
    // checking_char(str,size,valid);
    
    // checking_float(str,rest,valid,numeric);
    // checking_double(str,numeric,valid);
   
    // checking_integer(valid);

    // checking wrong input
    if((strlen(rest) > 0 and strcmp(rest,"f") != 0 and size > 1) or (size == 0))
    {
            std::cout << "char: impossible"   << '\n';
            std::cout << "int: impossible" << '\n';
            std::cout << "float: impossible" << '\n';
            std::cout << "double: impossible" << '\n';
           return;
    }

    // checking zero
    if((size == 1 and str[0] == '0'))
    {
         //std::cout <<GREEN<< "int" << RESET <<  std::endl;
        cs(0,fract_part,integer_part);
       return;
    }
    
    //checking char         
    if(size == 1 && integer_part == 0 && fract_part == 0)
    {
      
        //std::cout <<GREEN<< "char" << RESET <<  std::endl;
        char t = (char)str[0];
        cs((int)t,fract_part,integer_part);
        return;
    }
    // checking float
    if(strcmp(rest,"f") == 0)
    {
        cs(numeric,fract_part,integer_part);
        return;
    }

      // checking double
    if(fract_part != 0)
    {
        // std::cout <<GREEN<< "double" << RESET <<  std::endl;

        cs(numeric,fract_part,integer_part);
        return;
    }

    if(fract_part == 0 && integer_part != 0)
    {
        //std::cout <<GREEN<< "int" << RESET <<  std::endl;
        cs(integer_part,fract_part,integer_part);
        return;
    }
    
   
}



Scalar::~Scalar()
{
    
}
