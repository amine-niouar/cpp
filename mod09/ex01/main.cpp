/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/31 18:36:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"


#define GREEN "\033[1;32m"
#define RESET "\033[0m"





int main( int ac,char **av) {

    if(ac == 2)
    {

        std::string exp(av[1]);
        RPN rpn(exp);
        try
        {
             rpn.execute();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "bad number argument" << std::endl;
    
    
    
    return 0;

}