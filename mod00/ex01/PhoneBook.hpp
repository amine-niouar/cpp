/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:36:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/24 15:33:51 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include "Contact.hpp"

class PhoneBook
{
    private:
        int index;
        Contact contacts[8];
    public:

        PhoneBook();
        void addContact(Contact c);
        void search();
        void search_index(void);
        void print_column(std::string s,int last);


};

#endif


