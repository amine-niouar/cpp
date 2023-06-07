/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 12:05:23 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"




int main( int ac,char **av) {

    long number;
    int n;
    std::string tmp;
    PmergeMe p;

    try
    {
        if(ac > 1)
        {
            std::vector<int> l;
            int i(0);

            while(++i < ac)
            {
                tmp.assign(av[i]);
                std::istringstream iss(tmp);
                
                if(tmp.find_first_not_of("0123456789" ) == std::string::npos)
                {
                    iss >> number;

                    if(number > INT_MIN && number < INT_MAX)
                    {
                        n = number;
                        p.fill_c(n);
                    }
                    else
                        throw std::runtime_error("out of range number");
                }
                else
                    throw std::runtime_error("Error bad number input");
            
            }
            p.iter_vec("before");
            p.merge_vec();
            p.iter_vec("after");
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}