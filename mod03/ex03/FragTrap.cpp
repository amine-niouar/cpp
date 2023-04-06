/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:41:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/03 01:34:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap "<< name  << " is created" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    name = n;
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " is created" << std::endl;
}

FragTrap::FragTrap(FragTrap &ft) : ClapTrap(ft)
{
    std::cout << "FragTrap " << name << " is copied" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " <<  name  << " positive high fives request " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& ft)
{
    if(this != &ft)
        ClapTrap::operator=(ft);
    std::cout << "FragTrap " << name << " is assigned" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap " <<  name << " is destructed" << std::endl;
}

