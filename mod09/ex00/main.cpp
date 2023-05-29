/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 18:04:49 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "csv.hpp"
#include "btc.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"




int main( int ac,char **av) {

    if(ac != 2)
    {
          std::cerr << "Invalid argument " << std::endl; 
          exit(2);
    }
    try
    {
        csv c("data.csv");
        std::string f(av[1]);
        btc b( f );

         b.iterate();

        c.loadData();
        std::map<std::string, double> mp = c.getData();
        

        std::map<std::string, double>::iterator it = mp.begin();

        while(it != mp.end())
        {
        // std::cout << it->first << "," << it->second << std::endl;
            ++it;
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    //  double tmp_val;
    (void)ac;
    (void)av;
 
   
        
       
    
    
    //std::cout << "a: " << a << std::endl;
    return 0;

}