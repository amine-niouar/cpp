/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:25:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/09 00:41:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

#pragma once
#ifndef __CURE_H__
#define __CURE_H__

class Cure : public AMateria
{
       public:
            Cure();
            Cure(Cure &i);
            Cure& operator=(Cure &i);
            AMateria* clone() const;
            void use(ICharacter &target);
            ~Cure();
};

#endif
