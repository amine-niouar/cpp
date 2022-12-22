/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:05:31 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 20:32:39 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon  *club = new Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club->setType("some other type of club");
        bob.attack();
    }

    {

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

}
return 0;

}
