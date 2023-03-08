/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:11:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/22 18:57:37 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string t);
        const std::string& getType(void);
        void setType(std::string t);
        ~Weapon();
};


#endif