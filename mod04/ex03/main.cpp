/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 07:17:41 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"

    
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    
    ICharacter* me = new Character("me");

    
    AMateria* tmp;
    (void)tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // //  tmp = src->createMateria("ice");
    // // me->equip(tmp);
    // //  tmp = src->createMateria("cure");
    // // me->equip(tmp);

    me->unequip(1);

    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    //me->use(1, *bob);

    //while (1);

    
    //std::cout << tmp->getType() << std::endl;
    //std::cout << "hello " << std::endl;
    //while(1);
    return 0;
}

