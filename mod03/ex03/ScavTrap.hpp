/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:31:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/01 00:12:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual  public  ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(ScavTrap& st);
        ScavTrap& operator=(ScavTrap& st);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};