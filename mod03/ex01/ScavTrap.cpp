/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:37:44 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/03 02:06:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}


ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& st) : ClapTrap(st)
{
    std::cout << "ScavTrap " << name << " is copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& st) 
{
    if(this != &st)
        ClapTrap::operator=(st);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "ScavTrap " << name << " attacks " << target  << std::endl;
}

ScavTrap::~ScavTrap()
{
     std::cout << "ScavTrap " << name << " is destructed" << std::endl;
}

