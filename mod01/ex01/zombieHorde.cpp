/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:21:57 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 18:47:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    // its better to pass the name to all item in array in allocation
    // still not found a way to call the constructor with parameters 
    //from this line
    Zombie *zombies = new Zombie[N];


    // i think that this a stupid idea but we will see

    int i;

    i = 0;
    while(i < N)
        zombies[i++] = Zombie(name);

   
    return (zombies);
}