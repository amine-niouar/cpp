/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:15:58 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/01 12:04:13 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



Span::Span(): counter(0), capacity(0)
{

}

Span::Span(const Span &sp)
{
  std::cout << "hello" << std::endl;
    counter = sp.counter;
    range = sp.range;
    capacity = sp.capacity;
}


Span::Span(unsigned int N): counter(0), capacity(N)
{

}

Span& Span::operator=( Span &sp)
{
    if(this != &sp)
    {
        counter = sp.counter;
        range = sp.range;
        capacity = sp.capacity;
    }
    return *this;
}

void Span::addNumber(int n)
{
     
    if(counter == capacity)
        throw OutOfBoundException();
    
    range.push_back(n);
    counter++;
   
}

int  Span::shortestSpan()
{

    if(counter <= 1)
        throw SmallSizeException();

    std::sort(range.begin(),range.end());
    int short_sp,tempo;

    int i(counter);
    
    

    while(--i >= 0)
    {
        if((i-1) < 0)
            break;
        if(i == (counter-1))
            short_sp = range[i] - range[i-1];
        else
        {
            tempo = range[i] - range[i-1];
            if(tempo < short_sp)
                short_sp = tempo;
        }
    }
    return (short_sp);
}

int Span::longestSpan()
{
    if(counter <= 1)
        throw SmallSizeException();
  
    int longest_sp;
    

    longest_sp = max_element(range.begin(),range.end()) - min_element(range.begin(),range.end());
    return (longest_sp);
}

void Span::addRange(std::vector<int>::iterator it_begin,std::vector<int>::iterator it_end)
{
    
    std::vector<int>::iterator current;

    current = it_begin;

    for(;current != it_end;++current)
        this->addNumber(*current);
}

void Span::show()
{
    int i(-1);

    while(++i < counter)
    {
        if(i == (counter-1))
            std::cout << range[i] ;
        else
            std::cout << range[i] << ",";
    }
        

    std::cout << '\n';
}

Span::~Span()
{
    
}