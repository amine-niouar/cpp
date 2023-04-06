/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:36:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:05:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
     private:
        Brain *b;
     public:
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog &d);
        void makeSound() const;
        ~Dog();
};