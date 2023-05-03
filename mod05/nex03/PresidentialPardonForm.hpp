/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:17:55 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/01 23:25:34 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
     private:
        std::string target;
     public:
        PresidentialPardonForm(std::string t);
        void execute(Bureaucrat const & executor) const ;
        ~PresidentialPardonForm();
};