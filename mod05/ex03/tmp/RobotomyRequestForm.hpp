/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 17:27:07 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
     private:
        std::string target;
     public:
        RobotomyRequestForm(std::string t);
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};