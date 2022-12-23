/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:35:00 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 21:11:30 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **argv)
{
    int i;
    int x;
    
    if(ac >= 2)
    {
        x = 1;
        while(x < ac)
        {
            i = 0;
            while(argv[x][i])
            {
                if(std::islower(argv[x][i]))
                    argv[x][i] -= 32;
                std::cout << argv[x][i];
                i++;
            }
            std::cout << std::endl;
            x++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}