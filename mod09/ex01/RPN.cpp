/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:07:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/31 18:38:51 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"



RPN::RPN(std::string &e) : exp(e)
{
    
}


void RPN::execute()
{
    std::istringstream iss(exp);
    std::string token;
    int number;
    int infix[2];
    int x(0);
    int i;
    int result;
    
    while(iss >> token)
    {
        std::istringstream tmp(token);
        
        if(token.find_first_not_of("0123456789" ) == std::string::npos)
        {
            x++;
            tmp >> number;
            formula.push(number);
        }
        else
        {
            if(formula.size() >= 2)
            {
                i = 0;
                 while (!formula.empty())
                 {  
                        infix[i++] = formula.top();
                        formula.pop();
                 }
               
                if(token == "+")
                    result = infix[0] + infix[1];
                else if(token == "-")
                    result = infix[1] - infix[0];
                else if(token == "*")
                {
                    
                    result = infix[0] * infix[1];
                    
                }
                  
                else if(token == "/") 
                    result = infix[1] / infix[0];
                else
                    throw std::runtime_error("Error");
                //std::cout << infix[0] << " " << infix[1]  << std::endl;
                formula.push(result);
            }
             else
                    throw std::runtime_error("Error"); 
        }
            
       
    }
     if(formula.size() >= 2 || formula.size() == 0 || x < 2)
        throw std::runtime_error("Error");
     std::cout << formula.top() << std::endl;
}