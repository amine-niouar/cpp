/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:42:34 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/31 01:29:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap()
{
    n = "";
    hit = 10;
    energy = 10;
    d = 0;
}

ClapTrap::ClapTrap(std::string n,int h,int e,int d)
{
    name = n;
    hit = h;
    energy = e;
    damage = d;

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
        damage += amount;
        std::cout << "ClapTrap " << name << " take damage " << amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit += amount;
    energy -= 1;
    std::cout << "ClapTrap " << name << " is repaired with " << amount << std::endl;
}