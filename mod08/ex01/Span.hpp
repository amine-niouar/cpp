/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:34:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/01 12:03:47 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

class Span
{
     private:
        std::vector<int> range;
        int counter;
        int capacity;
     public:
        class OutOfBoundException : public std::exception
        {
            public:
                 const char* what() const throw() 
                 { return "Index Passed is out of bound";};
        };
        class SmallSizeException : public std::exception
        {
            public:  
                 const char* what() const throw() 
                 { return "Vector had small size cant get span";};
        };
        Span();
      
       
        Span(unsigned int N);
          Span(const Span &sp);
           Span& operator=( Span &sp);
        void addNumber(int n);
        void addRange(std::vector<int>::iterator it_begin,std::vector<int>::iterator it_end);
        int shortestSpan();
        int longestSpan();
        void show();
        ~Span();
};