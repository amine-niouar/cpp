/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:07:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 12:45:09 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    
}

RPN::RPN(RPN &r) : exp(r.exp),formula(r.formula)
{
    
}

RPN::RPN(std::string &e) : exp(e)
{
    
}

RPN& RPN::operator=(RPN &r)
{
    if(this != &r)
    {
        exp = r.exp;
        formula = r.formula;
    }
    return (*this);
}



void RPN::execute()
{
     
    std::string token;
    int number;
    int temp;
    int x(0);
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
             throw std::runtime_error("Error");
        x++;
    }
        
      
    
     if(formula.size() >= 2 || formula.size() == 0)
        throw std::runtime_error("Error");
     std::cout << formula.top() << std::endl;
}

RPN::~RPN()
{
    
}