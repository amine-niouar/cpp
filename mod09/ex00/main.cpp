/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/28 09:43:14 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "csv.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"




int main( int ac,char **av) {
    csv c("data.csv");

    //  double tmp_val;
    (void)ac;
    (void)av;
    // (void)tmp_val;
    // // std::string tempo(av[1]);
    
    // // tmp_val = std::strtod(tempo.c_str(),0);
    // // std::cout << tmp_val << std::endl;

     c.loadData();
    std::map<std::string, double> mp = c.getData();
     

    std::map<std::string, double>::iterator it = mp.begin();

    while(it != mp.end())
    {
        std::cout << it->first << "," << it->second << std::endl;
        ++it;
    }
        
       
    
    
    //std::cout << "a: " << a << std::endl;
    return 0;

}