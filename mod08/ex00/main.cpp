/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/01 10:45:41 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include <deque>

# include "easyfind.hpp"

# define GREEN "\033[1;32m"
# define RESET "\033[0m"

void line()
{
     std::cout << "--------------------------------" << std::endl;
}

void test1()
{
    try
    {
        std::cout << GREEN<< "Test1 ..." << RESET <<  std::endl;
        std::vector<int> vec;
        std::vector<int>::iterator found;
        
        vec.push_back(10);
        vec.push_back(20);
        found = easyfind< std::vector<int> >(vec,10);
        std::cout << "found : " << *found << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    line();
}

void test2()
{
    try
    {
        std::cout << GREEN<< "Test2 ..." << RESET <<  std::endl;
        std::list<int> players;
        std::list<int>::iterator found;

        players.push_back(300);
        players.push_back(200);
        players.push_back(400);
        found = easyfind<std::list<int> >(players,200);
        std::cout << "found : " << *found << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    line();
}

void test3()
{
    try
    {
        std::cout << GREEN<< "Test3 ..." << RESET <<  std::endl;
        
        std::deque<int> reals;
        std::deque<int>::iterator found;
        found = easyfind<std::deque<int> >(reals,7);
        std::cout << "found : " << *found << std::endl;
        line();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}



int main( void ) {
   
    test1();
    test2();
    test3();
    return 0;

}