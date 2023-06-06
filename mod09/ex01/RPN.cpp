/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:07:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/06 17:02:45 by aniouar          ###   ########.fr       */
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
                {
                     if(infix[0] == 0)
                          throw std::runtime_error("Error");
                     result = infix[1] / infix[0];
                }
                else
                    throw std::runtime_error("Error");
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

void RPN::execute_1()
{
     
    std::string token;
    int number;
    //int counter(0);
    int temp;
    int x(0);
    //int result;
    int i;
    token = exp;
    x = 0;
    while(token[x])
    {
       
        if(isdigit(token[x]))
        {
            
            number = token[x] - 48;
            formula.push(number);
        }
        else if(token[x] == '+' || token[x] == '/' || token[x] == '*' || token[x] == '-')
        {
            if(formula.size() < 2)
                 throw std::runtime_error("Errors");
            i =0;
            while(i < 2)
            {
                if(i == 0)
                    temp = formula.top();
                else
                {
                    if(token[x] == '+')
                        temp =  formula.top() + temp;
                    if(token[x] == '-')
                        temp =  formula.top() - temp;
                    if(token[x] == '*')
                        temp =  formula.top() * temp;
                    if(token[x] == '/')
                    {
                        if(temp == 0)
                            throw std::runtime_error("Error");
                        temp =  formula.top() / temp; 
                    }
                                    
                }
                formula.pop();    
                i++;
            }
            formula.push(temp);
        }
        else if(token[x] == 32 || token[x] == '\r' || token[x] == '\t')
            ;
        else 
             throw std::runtime_error("Errora");
        x++;
    }
        
      
    
     if(formula.size() >= 2 || formula.size() == 0)
        throw std::runtime_error("Erroro");
     std::cout << formula.top() << std::endl;
}