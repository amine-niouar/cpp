/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:35:13 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/01 00:02:47 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string n);
        FragTrap(FragTrap &ft);
        FragTrap& operator=(FragTrap& ft);
        void highFivesGuys(void);
        ~FragTrap();
};