/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:52:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/03 23:56:08 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"




DiamondTrap::DiamondTrap() : FragTrap() , ScavTrap() 
{
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n)  , FragTrap(n /*+ "_clap_name"*/) , ScavTrap(n /*+ "_clap_name"*/)
{
    DiamondTrap::name = n;
    ClapTrap::name = n+ "_clap_name";
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->damage = 30;
    std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& dt) : ClapTrap(dt),  FragTrap(dt), ScavTrap(dt)
{
    this->name = dt.name;
    std::cout << "DiamondTrap " << name << " is copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& dt)
{
    if(this != &dt)
    {
        this->name = dt.name;
        // it needs test
        ClapTrap::operator=(dt);
    }
    std::cout << "DiamondTrap " << name << " is assigned" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    // Possible override
    ScavTrap::attack(target);
    std::cout << "DiamondTrap " << name << " attacks " << target  << std::endl;
}

void DiamondTrap::whoami()
{
    std::cout << "Im  " << name << " a DiamondTrap and my grandbase name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::show()
{
    std::cout << hit << " " << energy << " " << damage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destructed" << std::endl;
}

