/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:21:57 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/22 18:32:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{


    if(N > 0)
    {
         Zombie *zombies = new Zombie[N];
        int i;

        i = 0;
        while(i < N)
        zombies[i++] = Zombie(name);
        return (zombies);
    }
    return (0);
}