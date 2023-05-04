/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:04:34 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/04 22:43:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
     private:
        std::string target;
         
     public:
        ShrubberyCreationForm(std::string t);
        ShrubberyCreationForm&  operator=(ShrubberyCreationForm& scf);
        void writing_to_target(void) const;
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};