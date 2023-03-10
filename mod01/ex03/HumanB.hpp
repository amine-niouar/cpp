/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:56 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/23 10:01:21 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* wp;
        std::string name;
    public:
        HumanB(std::string n);
        void setWeapon(Weapon& wpp);
        void attack();
        ~HumanB();
};

#endif