/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:36:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:32:32 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalA.hpp"
#include "Brain.hpp"

class Dog : public AnimalA
{
     private:
        Brain *b;
     public:
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog &d);
        void makeSound() const;
        virtual ~Dog();
};