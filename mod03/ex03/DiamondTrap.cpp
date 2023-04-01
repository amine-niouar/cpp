/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:52:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/01 02:13:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"




DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap()
{
    
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n) , ScavTrap(n) , FragTrap(n) 
{
    DiamondTrap::name = n;
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& dt) : ScavTrap(dt) , FragTrap(dt)
{
    
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& dt)
{
    if(this != &dt)
        ;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
    std::cout << "DiamondTrap " << name << " attacks " << target  << std::endl;
}

void DiamondTrap::whoami()
{
     std::cout << "Im  " << name << " a DiamondTrap and my grandbase name is " << ClapTrap::name + "_clap_trap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destructed" << std::endl;
}

