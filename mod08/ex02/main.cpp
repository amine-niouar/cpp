/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/26 19:11:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <stack>


#include "MutantStack.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"




void line()
{
     std::cout << "--------------------------------" << std::endl;
}


void test()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
 
}

int main( void ) {
   
   
    MutantStack<int> mt;

    mt.push(10);
     mt.push(20);
      mt.push(20);

    MutantStack<int>::iterator it = mt.begin();
    MutantStack<int>::iterator ite = mt.end();

    std::cout << mt.size() << std::endl;
  
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    line();
    test();

    std::stack<int> s(mt);

    s.push(10);
    s.push(20);

    std::cout << "shit "  << s.size() << std::endl;
        
    return 0;

}