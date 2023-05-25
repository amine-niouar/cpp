/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 08:25:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main( void ) {
   
    try
    {
         std::vector<int> vec;
        std::list<int> gqlist;

        gqlist.push_back(30);
        gqlist.push_back(40);
        gqlist.push_back(50);
        
        vec.push_back(10);
        vec.push_back(20);
        easyfind< std::vector<int>,int>(vec,10);

        easyfind< std::list<int>,int>(gqlist,20);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
   

    return 0;

}