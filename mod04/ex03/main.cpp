/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/09 05:50:12 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "MateriaSource.hpp"

#include <stdlib.h>
void f()
{
   
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    Character *me = new Character("me");
    (void)me;
    ICharacter *t = new Character("t");
    
    AMateria *tmp;
    
    tmp = src->createMateria("ice");
    t->equip(tmp);

    tmp = src->createMateria("cure");
    t->equip(tmp);
    

    
    
    
    
    //AMateria *copy = t->getCopy(0);
   // t->unequip(0);
    //(void)copy;

    
   // t->unequip(0);
    
    ICharacter *bob = new Character("bob");
    (void)bob;

    *t = *me;


   // std::cout << "testing copy " << you.getName() << std::endl;
    
    // me->use(0, *bob);
    // me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    delete t;

    //delete copy;
    //delete you;
    //delete b;
 }
int main()
{
  f();
    while(1);
    return 0;
}
