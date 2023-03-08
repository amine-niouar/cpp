/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:15:54 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/25 16:33:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::addContact(Contact c)
{
     contacts[index % 8] = c;
     index++;
}


void PhoneBook::search_index(void)
{
    int inputIndex;
    std::string strInput;
    std::string waiting;
    

    inputIndex = -1;
     if(index >= 0)
    {
        std::cout << "Enter an index : ";
        while(std::getline(std::cin, strInput))
        {
            if(strInput.length() == 1)
             {
                inputIndex = strInput[0] - 48;
                std::cout <<  "index : " << inputIndex << std::endl;
                inputIndex -= 1;
             }
            break;
        }
        if(inputIndex < index && inputIndex >= 0 && inputIndex <= 7 && index >= 0)
        {
            std::cout << "index : " << std::to_string(inputIndex+1) << std::endl;
            std::cout << "firstname : " << contacts[inputIndex].getFirstName() << std::endl;
            std::cout << "lastname : "  << contacts[inputIndex].getLastName() << std::endl;
            std::cout << "nickname : " << contacts[inputIndex].getNickName() << std::endl;
            std::cout << "dark secret : " << contacts[inputIndex].getDarkestSecret() << std::endl;
            std::cout << "phone number : " << contacts[inputIndex].getPhoneNumber() << std::endl;
        }
        else
            std::cout << "Out of range ! " << std::endl;

        std::cout << "type c to continue... ";
          while(std::getline(std::cin, strInput))
          {
                if(strInput == "c")
                    break;
                else
                    std::cout << "type c to continue... ";
           }
    }
}

void PhoneBook::print_column(std::string s,int last)
{
     if( s.length() < 10)
        std::cout << std::right << std::setfill(' ')  << std::setw(10)  << s;
    else
        std::cout << s.substr(0,9) << ".";
    if(!last)
        std::cout << "|";
}


void PhoneBook::search()
{
    int i;
    int myindex;

    // view 

    
    if(index == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        std::cout << "Press Enter to continue...";
        std::getchar();
        return;
    }
    else
    {
        std::cout << std::right << std::setfill(' ')  << std::setw(10)  << "Index";
        std::cout << "|";
        std::cout << std::right << std::setfill(' ') << std::setw(10) << "Firstname" ;
        std::cout << "|";
        std::cout  << std::right << std::setfill(' ')  << std::setw(10) << "Lastname";
        std::cout << "|";
        std::cout  << std::right << std::setfill(' ')  << std::setw(10) << "Nickname" << std::endl;
    }
    if(index > 8)
        myindex = 8;
    else
        myindex = index;
    i = 0;
    while(i < myindex)
    {
        print_column(std::to_string(i+1),0);
        print_column(contacts[i].getFirstName(),0);
        print_column(contacts[i].getLastName(),0);
        print_column(contacts[i].getNickName(),1);
        std::cout << std::endl;
        i++;
    }


    // search in phonebook list per index
    search_index();

}