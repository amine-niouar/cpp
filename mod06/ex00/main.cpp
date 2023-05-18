/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/18 19:07:20 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Scalar.hpp"




int check_science(std::string & s,std::string f_science[])
{
    int i(-1);
    

    while(++i < 3)
    {
        
        if(s == f_science[i])
            return (i);
    }

    return (-1);
}

void convert(std::string & s)
{
     // inf
     // out of range

    try
    {
        std::string f_science[3];

        f_science[0] = "-inff";
        f_science[1] = "+inff";
        f_science[2] = "nanf";

        float v_science[3];

        v_science[0] = -HUGE_VAL;
        v_science[1] = HUGE_VAL;
        v_science[2] =  nanf("");

        std::string d_science[3];

        d_science[0] = "-inf";
        d_science[1] = "+inf";
        d_science[2] = "nan";

         double vd_science[3];

         vd_science[0] = -HUGE_VAL;
         vd_science[1] = HUGE_VAL;
         vd_science[2] =  nan("");
        

        


        
        char *tmp;
        int idxf;
        int idxd;
        int i = -0;
        (void)i;
        int size;

        size = s.length();

        idxf = check_science(s,f_science);
        idxd = check_science(s,d_science);


        std::cout << "value " << std::numeric_limits<double>::max() << std::endl;
        double d = std::strtod(s.c_str(),&tmp);

        
        double fp,ip;
        fp  = modf(d,&ip);

        //std::cout << "debug : tmp " << tmp << " d " << d  << std::endl;
        std::cout << "Integer part " <<  ip  << " Fraction part " << fp  << std::endl;

        // impossible
         if((strlen(tmp) > 0 && strcmp(tmp,"f") != 0) || size == 0)
        {
            std::cout << "char: impossible"   << '\n';
            std::cout << "int: impossible" << '\n';
            std::cout << "float: impossible" << '\n';
            std::cout << "double: impossible" << '\n';
        }

        // sicence float
        else if((size == 1 && s[0] == '0') || d == 0)
        {
              std::cout <<GREEN<< "int" << RESET <<  std::endl;
             int t = 0;
               double dd = static_cast<double>(t);
             float f = static_cast<float>(t);
                int i = static_cast<int>(t);
                char c = static_cast<char>(t);

            if((c >= 0 && c <= 32) || c < 0)
                std::cout << "char: Non displayable"   << '\n';
            else
                 std::cout << "char: " << c  << '\n';
            std::cout << "int: " << i << '\n';
            std::cout << "float: " << f << ".00f\n";
            std::cout << "double: " << dd <<  ".00\n";
        }
        // float
        else if(strcmp(tmp,"f") == 0 || idxf >= 0)
        {
            std::cout <<GREEN<< "float" << RESET <<  std::endl;
            float t = (idxf >= 0) ? (v_science[idxf]) : (fp + ip);
               double dd = static_cast<double>(t);
             float f = static_cast<float>(t);
                int i = static_cast<int>(t);
                char c = static_cast<char>(t);

            if((c >= 0 && c <= 32) || c < 0)
                std::cout << "char: Non displayable"   << '\n';
            else
                 std::cout << "char: " << c  << '\n';
            std::cout << "int: " << i << '\n';
            std::cout << "float: " << f << "f\n";
            std::cout << "double: " << dd << '\n';


        }
        // double
        else if(fp != 0  || idxd >= 0)
        {
            std::cout <<GREEN<< "double" << RESET <<  std::endl;
             double t = (idxd >= 0) ? (vd_science[idxd]) : (fp + ip);
               double dd = static_cast<double>(t);
             float f = static_cast<float>(t);
                int i = static_cast<int>(t);
               

            if(i >= 0 && i <= 255)
            {
                 char c = static_cast<char>(t);
                if((i >= 0 && i <= 32) || i < 0)
                    std::cout << "char: Non displayable"   << '\n';
                else
                 std::cout << "char: " << c  << '\n';
            }
            else
                std::cout << "char: impossible"   << '\n';
         
            std::cout << "int: " << i << '\n';
            std::cout << "float: " << f << "f\n";
            std::cout << "double: " << dd << '\n';

        }
        else if(fp == 0 && ip != 0)
        {
            std::cout <<GREEN<< "int" << RESET <<  std::endl;
            //std::cout << " ip " << ip << std::endl;
            if(ip >= INT_MIN && ip <= INT_MAX)
            {
                  int t = (int)ip;
                double dd = static_cast<double>(t);
                float f = static_cast<float>(t);
                int i = static_cast<int>(t);
                  if(i >= 0 && i <= 255)
                {
                    char c = static_cast<char>(t);
                    if((i >= 0 && i <= 32) || i < 0)
                        std::cout << "char: Non displayable"   << '\n';
                    else
                    std::cout << "char: " << c  << '\n';
                }
                else
                    std::cout << "char: impossible"   << '\n';
                
                
                std::cout << "int: " << i << '\n';
                std::cout << "float: " << f << ".0f\n";
                std::cout << "double: " << dd <<  ".00\n";
            }
            else
            {
                std::cout << "char: impossible"   << '\n';
                std::cout << "int: impossible" << '\n';
                std::cout << "float: impossible" << '\n';
                std::cout << "double: impossible" << '\n';
            }
           

        }
        else if(size == 1)
        {
            std::cout <<GREEN<< "char" << RESET <<  std::endl;
            char t = (char)s[0];
               double dd = static_cast<double>(t);
             float f = static_cast<float>(t);
                int i = static_cast<int>(t);
                char c = static_cast<char>(t);
                
            
            if(c >= 0 && c <= 32)
                std::cout << "char: Non displayable"   << '\n';
            else
                 std::cout << "char: " << c  << '\n';
            std::cout << "int: " << i << '\n';
            std::cout << "float: " << f << ".0f\n";
            std::cout << "double: " << dd <<  ".00\n";


        }
            

        

    

        // std::cout << c << '\n';
        // std::cout << i << '\n';
        // std::cout << f << '\n';
        // std::cout << dd << '\n';
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


int main(int ac,char **av)
{

    // 12f
    // multiple .0f
    // inf inf

    //float f = 12f;
    if(ac < 2)
        exit(0);

    Scalar s;
    
        
    std::string tmp(av[1]);
    s.convert(tmp);
   //convert(tmp);
}
