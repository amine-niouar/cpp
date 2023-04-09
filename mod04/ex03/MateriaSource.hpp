/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:05:43 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/09 01:06:36 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        int index;
        AMateria* slots[4]; 
    public:
        MateriaSource();
        MateriaSource(MateriaSource &m);
        MateriaSource& operator=(MateriaSource &m);
        void learnMateria(AMateria* am);
        AMateria* createMateria(std::string const&);
        ~MateriaSource(); 
};