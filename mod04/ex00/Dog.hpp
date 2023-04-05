/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:19:10 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:05:59 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog &d);
        ~Dog();
        void makeSound() const;
};


