/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 16:41:08 by aniouar          ###   ########.fr       */
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



void test1()
{
    std::cout << GREEN<< "Test1 ..." << RESET <<  std::endl;
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
    std::stack<int> s(mstack);
    line();
}

void test2()
{
    std::cout << GREEN<< "Test2 ..." << RESET <<  std::endl;
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);
    std::list<int>::iterator it = mlist.begin();
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s(mlist);
    line();
}

void test3()
{
    std::cout << GREEN<< "Test3 ..." << RESET <<  std::endl;
     MutantStack<int> mstack,mstack1;


    if(mstack.empty())
    {
        mstack.push(33);
        mstack.push(100);
    }
   
    mstack1.push(42);
    mstack1.push(1337);
     mstack1.push(140);
    
    mstack1.swap(mstack);
    mstack.pop();
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
   
    if(mstack.size() > 0)
    {
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    // testing const iterator
   line();
}


int main( void ) {
   
   
    MutantStack<int> mt;

    // mt.push(10);
    //  mt.push(20);
    //   mt.push(20);

    // MutantStack<int>::iterator it = mt.begin();
    // MutantStack<int>::iterator ite = mt.end();

    // std::cout << mt.size() << std::endl;
  
    // while(it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    
    test1();
    test2();
    
    test3();
   
  
    

   // std::cout << "shit "  << s.size() << std::endl;
        
    return 0;

}