/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:50:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:10:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        void makeSound() const;
        WrongAnimal();
        WrongAnimal(WrongAnimal &a);
        const std::string& getType(void) const;
        WrongAnimal& operator=(WrongAnimal &a);
        ~WrongAnimal();  
};
