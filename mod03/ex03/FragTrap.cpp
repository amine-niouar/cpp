/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:41:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/01 02:04:28 by aniouar          ###   ########.fr       */
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
    
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " <<  name  << " positive high fives request " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& ft)
{
    if(this != &ft)
        FragTrap::operator=(ft);
    return *this;
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap " <<  name << " is destructed" << std::endl;
}

