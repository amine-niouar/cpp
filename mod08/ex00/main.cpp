/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 19:17:29 by aniouar          ###   ########.fr       */
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
    std::cout << GREEN<< "Test1 ..." << RESET <<  std::endl;
    std::vector<int> vec;
    
    vec.push_back(10);
    vec.push_back(20);
    easyfind< std::vector<int> >(vec,10);
    line();
}

void test2()
{
    std::cout << GREEN<< "Test2 ..." << RESET <<  std::endl;
    std::list<int> players;

    players.push_back(300);
    players.push_back(200);
    players.push_back(400);
    easyfind<std::list<int> >(players,200);
    line();
}

void test3()
{
    std::cout << GREEN<< "Test3 ..." << RESET <<  std::endl;
    try
    {
        std::deque<int> reals;

        // reals.push_back(5);
        // reals.push_back(6);
        // reals.push_back(9);
        easyfind<std::deque<int> >(reals,7);
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