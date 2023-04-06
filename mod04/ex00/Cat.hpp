/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:19:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/04 00:41:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat &c);
        Cat& operator=(Cat &c);
        void makeSound() const;
        ~Cat();
};