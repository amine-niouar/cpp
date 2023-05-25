/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:34:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 19:46:40 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stack>

// deque 
// container_name c;
// return c.begin();
class Span
{
     private:
         std::stack<int> shit;
        std::vector<int> range;
        int counter;
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
        Span(unsigned int N);
        void addNumber(int n);
        void addRange(std::vector<int>::iterator it_begin,std::vector<int>::iterator it_end);
        int shortestSpan();
        int longestSpan();
        void show();
};