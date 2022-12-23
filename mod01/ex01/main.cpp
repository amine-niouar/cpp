/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:05:31 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 09:34:00 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(10,"amine");
    
    int i;

    i = 0;
    while(i < 10)
        z[i++].announce();

    delete[] z;
}