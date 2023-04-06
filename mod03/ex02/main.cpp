/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/03 01:29:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main()
{
    std::string n1("russia"),n2("ukraine");
    FragTrap f1(n1),f2(n2);
        
    f1.takeDamage(10);
    f2.takeDamage(2);
    f1.attack(n2);
    f2.highFivesGuys();
    f2.attack(n1);
    f1.highFivesGuys();
    f2.beRepaired(6);
    f1.beRepaired(4);


    
    
}