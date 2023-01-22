/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:35:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/21 17:35:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **argv)
{
    int i;
    int x;
    char ch;
    
    if(ac >= 2)
    {
        x = 1;
        while(x < ac)
        {
            i = 0;
            while(argv[x][i])
            {
                ch = std::toupper(argv[x][i]);
                std::cout << ch;
                i++;
            }
            x++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    return 0;
}