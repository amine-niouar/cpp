/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:09:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/03 00:10:58 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("ShrubberyCreation",145,137)
{
    target = t;
    std::cout << target  << " is created " << std::endl;
}

void ShrubberyCreationForm::writing_to_target(void) const
{
    std::string filename;
    std::fstream writeMode;

    writeMode.exceptions(std::fstream::failbit);
    filename.append(target);
    filename.append("_shrubbery");

    writeMode.open(filename,std::ios::out);
    writeMode << "                              oxoxoo    ooxoo        " << '\n';
    writeMode << "                            ooxoxo oo  oxoxooo      " << '\n';
    writeMode << "                           oooo xxoxoo ooo ooox    " << '\n';
    writeMode << "                             oxo o oxoxo  xoxxoxo    " << '\n';
    writeMode << "                              ooo\\oo\\  /o/o     " << '\n';
    writeMode << "                                  \\  \\/ /      " << '\n';
    writeMode << "                                     |   /        " << '\n';
    writeMode << "                                     |  |o        " << '\n';
    writeMode << "                                     | D|         " << '\n';
    writeMode << "                                     |  |         " << '\n';
    writeMode << "                                     |  |         " << '\n';
    writeMode << "                              ______/____\\____    " << '\n';
    writeMode.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if(getSignedStatus() == true)
        {
            if(executor.getGrade() < getGradeE())
            {
                std::cout << "writing a wonderful ascii tree to " << target  << "_shrubbery" << std::endl; 
                writing_to_target();      
            }
            else
                throw CantExecuteExecption();
        }
        else
            throw FormNotSignedExecption();
          
    }
    catch(std::exception &e)
    {
        std::cerr << executor.getName()  << " cant execute the following action " << e.what() << std::endl;
    }
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << target  << " is destructed " << std::endl;
}