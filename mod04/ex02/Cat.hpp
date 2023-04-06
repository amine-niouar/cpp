/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:19:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:32:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalA.hpp"
#include "Brain.hpp"


class Cat : public AnimalA
{
    private:
        Brain *b;
    public:
        Cat();
        Cat(Cat &c);
        Cat& operator=(Cat &c);
        void makeSound() const;
        virtual ~Cat();
};