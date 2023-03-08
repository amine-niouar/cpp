/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:00:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 09:50:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string zombiename)
{
    name = zombiename;
}

void Zombie::setName(std::string zombiename)
{
    name = zombiename;
}

void Zombie::announce(void)
{
    std::cout << "<" << name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor with name called " << name << std::endl;
}
