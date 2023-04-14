/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 03:04:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"

#include <stdlib.h>

// void f()
// {
//   IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();

    // adding materia to slots Materia Source
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;

    // create materia in MateriaSource and equip it to Character
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // making another two amateria for testing unequip

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // testing the copy assignement of Character
    
    IMateriaSource* another_src = new MateriaSource();
    ICharacter  *person = new Character("person");
    tmp = another_src->createMateria("ice");
    person->equip(tmp);
    tmp = another_src->createMateria("cure");
    person->equip(tmp);
    
    Character  *newperson = new Character("person");

    std::cout << "------------------" << std::endl;
    newperson = *person;
    std::cout << "Materia type " <<  newperson->getCopy(0)->getType() << std::endl;
    std::cout << "------------------" << std::endl;
    
     
    
    // getting an copy before unequip for avoid leaks
    AMateria *copy = me->getCopy(2);
    me->unequip(2);
    delete copy;
    
    copy = me->getCopy(2);
    me->unequip(2);
    delete copy;

    // calling the message of materia depend on the type
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    
    delete bob;
    delete me;
    delete src;

    // f();
    // while(1);
    return 0;
}
