/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:42:34 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/03 01:25:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    hit = 10;
    energy = 10;
    damage = 0;
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
    name = n;
    hit = 10;
    energy = 10;
    damage = 0;

    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& ct)
{
    name  = ct.name;
    hit   =  ct.hit;
    energy = ct.energy;
    damage = ct.damage;

    std::cout << "ClapTrap " << name << " is copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& ct)
{
    if(this != &ct)
    {
        name  = ct.name;
        hit   =  ct.hit;
        energy = ct.energy;
        damage = ct.damage;
    }
    std::cout << "ClapTrap " << name << " is assigned" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " is destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(hit > 0 && energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage 
        << " points of damage! " << std::endl;
        energy -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit > 0 && energy > 0)
    {
        hit -= amount;
        std::cout << "ClapTrap " << name << " take damage " << amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(hit > 0 && energy > 0)
    {
        hit += amount;
        energy -= 1;
        std::cout << "ClapTrap " << name << " is repaired with " << amount << std::endl;
    }
   
}