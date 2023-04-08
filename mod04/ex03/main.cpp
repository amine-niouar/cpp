/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/08 02:28:38 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"

#include <stdlib.h>
    
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    
    ICharacter* me = new Character("me");

    
    AMateria* tmp;
    //(void)tmp;
    tmp = src->createMateria("ice");

    // tmp ice
    me->equip(tmp);
    // slots[0] = tmp ice

    // tmp cure
    tmp = src->createMateria("cure");
     // slots[0] = tmp cure
    me->equip(tmp);
    //  tmp = src->createMateria("ice");
    // me->equip(tmp);
    //  tmp = src->createMateria("cure");
    // me->equip(tmp);

    me->unequip(0);
    // me->unequip(1);

    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    int *t = new int;
    t = nullptr;
    
    system("leaks Materia");
    //std::cout << tmp->getType() << std::endl;
    //std::cout << "hello " << std::endl;
    //while(1);
    return 0;
}

