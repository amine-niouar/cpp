/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:51:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:10:19 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat &c);
        WrongCat& operator=(WrongCat &c);
        void makeSound() const;
        ~WrongCat();
};
