/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:04:34 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 17:28:38 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
     private:
        std::string target;
     public:
        ShrubberyCreationForm(std::string t);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};