/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:34:27 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/31 15:20:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hit;
        int energy;
        int damage;
    public:
        ClapTrap();
        ClapTrap(std::string n);
        ClapTrap(ClapTrap& ct);
        ClapTrap& operator=(ClapTrap &c);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};