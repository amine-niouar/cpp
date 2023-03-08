/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:36:16 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/27 23:51:37 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
}


Contact::Contact(std::string fn,std::string ln,std::string nk,std::string pn,std::string ds) :
 first_name(fn),last_name(ln),nickname(nk),phone_number(pn),darkest_secret(ds)
{
    // int a = 5  int a(5)
    first_name = fn;
    last_name = ln;
}

std::string Contact::getFirstName() const
{
    return (first_name);
}

std::string Contact::getLastName() const
{
    return (last_name);
}

std::string Contact::getNickName() const
{
    return (nickname);
}

std::string Contact::getDarkestSecret() const
{
    return (darkest_secret);
}

std::string Contact::getPhoneNumber() const
{
    return (phone_number);
}




