/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomZombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:04:00 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 13:05:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zombie(name);

    zombie.announce();
}