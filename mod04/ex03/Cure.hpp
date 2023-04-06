/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:25:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 15:18:08 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


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