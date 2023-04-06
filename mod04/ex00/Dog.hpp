/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:36:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:09:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


class Dog : public Animal
{
     public:
       
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog &d);
        void makeSound() const;
        ~Dog();
};
