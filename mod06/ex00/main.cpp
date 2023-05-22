/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 01:30:29 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Scalar.hpp"



int main(int ac,char **av)
{

    // // 12f
    // // multiple .0f
    // // inf inf

    // //float f = 12f;
    if(ac < 2)
        exit(0);

    Scalar s;
    
        
    std::string tmp(av[1]);
    s.convert(tmp);
   //float a = 44.0 / 0;
   //std::cout << a;

}
