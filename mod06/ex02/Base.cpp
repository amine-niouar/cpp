/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:00:22 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 19:41:44 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

 Base * Base::generate(void)
 {
    srand(time(NULL));

    int choice;

    choice = rand() % 3 + 1;
    if(choice == 1)
        return (new A);
    else if(choice == 2)
        return (new B);
    else
        ;
    return (new C);
 }

 void Base::identify(Base* p)
 {
    try
    {
        A *a = dynamic_cast<A*>(p);
        if(a != 0)
            std::cout << "A\n";
        B *b = dynamic_cast<B*>(p);
         if(b != 0)
            std::cout << "B\n";

       C *c = dynamic_cast<C*>(p);
        if(c != 0)
            std::cout << "C\n";

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }

 }


  void Base::identify(Base& p)
  {
    try
    {
        
         A a = dynamic_cast<A&>(p);
         std::cout << "A\n";
    }
    catch(std::exception &e)
    {
        (void)e;
    }

    try
    {
         B b = dynamic_cast<B&>(p);
          std::cout << "B\n";
    }
    catch(std::exception &e)
    {
        (void)e;
    }

    try
    {
         C c = dynamic_cast<C&>(p);
         std::cout << "C\n";
    }
    catch(std::exception &e)
    {
        (void)e;
    }
  }