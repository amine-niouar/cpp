/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:37:44 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/31 02:23:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap " << getName() << " is created" << std::endl;
}


ScavTrap::ScavTrap(std::string n) : ClapTrap(n,100,50,20)
{
    std::cout << "ScavTrap " << getName() << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& st) : ClapTrap(st)
{
    
}

ScavTrap& ScavTrap::operator=(ScavTrap& st) 
{
    if(this != &st)
        ClapTrap::operator=(st);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "ScavTrap " << getName() << " attacks " << target  << std::endl;
}

ScavTrap::~ScavTrap()
{
     std::cout << "ScavTrap " << getName() << " is destructed" << std::endl;
}

