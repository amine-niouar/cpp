/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:17:55 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/08 19:15:42 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
     private:
        std::string target;
     public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &ppf);
        PresidentialPardonForm(std::string t);
        PresidentialPardonForm&  operator=(PresidentialPardonForm& ppf);
        void execute(Bureaucrat const & executor) const ;
        ~PresidentialPardonForm();
};