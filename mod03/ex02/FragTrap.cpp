/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:41:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/31 03:01:21 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap "<< " is created" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n,100,100,30)
{
    std::cout << "FragTrap " << getName() << " is created" << std::endl;
}

FragTrap::FragTrap(FragTrap &ft) : ClapTrap(ft)
{
    
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " positive high fives request " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& ft)
{
    if(this != &ft)
        FragTrap::operator=(ft);
    return *this;
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap " << getName() << " is destructed" << std::endl;
}

