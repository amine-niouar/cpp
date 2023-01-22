/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:36:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/22 17:36:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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


