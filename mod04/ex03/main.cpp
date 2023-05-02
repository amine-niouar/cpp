// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
// /*   Updated: 2023/04/15 00:09:11 by aniouar          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"


int main1()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}

int main()
{
  main1();
  system("leaks Materia");
}

// // #include <stdlib.h>

// void test_copy_assign()
// {
//     Character *person = new Character("person");
//     person->equip(new Ice);
//     person->equip(new Cure);
    
//     Character  *newperson = new Character("newperson");

  
//     *newperson = *person;
   
//     if(newperson->getCopy(0))
//         std::cout << "Materia type " <<  newperson->getCopy(0)->getType() << std::endl;
//     std::cout << "------------------" << std::endl;
    
//     AMateria *copy = newperson->getCopy(1);
//   newperson->unequip(1);
//     delete copy;
//      std::cout << "------------------" << std::endl;
//      std::cout << "Me Character type " <<  person->getCopy(1)->getType() << std::endl;
//       std::cout << "------------------" << std::endl;
    
//     delete person;
//     delete newperson;
// }

// void f()
// {
//    IMateriaSource* src = new MateriaSource();

//     // adding materia to slots Materia Source
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;

//     // create materia in MateriaSource and equip it to Character
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // making another two amateria for testing unequip

//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

 
    
   
   
    
//     // getting an copy before unequip for avoid leaks
    
//     AMateria *copy = me->getCopy(2);
//     me->unequip(2);
//     delete copy;

//     // calling the message of materia depend on the type
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//      // testing the copy assignement of Character
//      test_copy_assign();

    
//     delete bob;
//     delete me;
//     delete src;
// }



// int main()
// {
    
//    IMateriaSource* src = new MateriaSource();

//     // adding materia to slots Materia Source
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;

//     // create materia in MateriaSource and equip it to Character
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // making another two amateria for testing unequip

//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

 
    
   
   
    
//     // getting an copy before unequip for avoid leaks
    
//     AMateria *copy = me->getCopy(2);
//     me->unequip(2);
//     delete copy;

//     // calling the message of materia depend on the type
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//      // testing the copy assignement of Character
//      test_copy_assign();

    
//     delete bob;
//     delete me;
//     delete src;

//     // f();
//     // while(1);
//     return 0;
// }
