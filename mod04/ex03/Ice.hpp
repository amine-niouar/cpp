/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:25:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 15:00:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


class Ice : public AMateria
{
       public:
            Ice();
            Ice(Ice &i);
            Ice& operator=(Ice &i);
            AMateria* clone() const;
            void use(ICharacter &target);
            ~Ice();
};