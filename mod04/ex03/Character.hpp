/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:27:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/08 01:39:22 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__


#include "AMateria.hpp"
#include "Ice.hpp"

#include <iostream>

class Character : public ICharacter
{
    private:
        std::string name;
        int index;
        AMateria *slots[4];
    public:
        Character();
        Character(std::string n);
        Character(Character &c);
        Character& operator=(Character &c);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};

#endif
