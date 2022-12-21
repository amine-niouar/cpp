/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:35:00 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 11:40:08 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **argv)
{
    int i;
    
    if(ac == 2)
    {
        i = 0;
        while(argv[1][i])
        {
            if(std::islower(argv[1][i]))
                argv[1][i] -= 32;
            std::cout << argv[1][i];
            i++;
        }
        std::cout << std::endl;   
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}