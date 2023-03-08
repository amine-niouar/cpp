/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:21:57 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 11:01:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;

    if(N > 0)
    {
        Zombie *zombies = new Zombie[N];
       
    
        i = 0;
        while(i < N)
             zombies[i++].setName(name);
        return (zombies);       
    }
    return (0);
}