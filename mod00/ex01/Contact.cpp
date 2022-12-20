#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{

}


Contact::Contact(std::string fn,std::string ln,std::string nk,std::string pn,std::string ds) :
    first_name(fn),last_name(ln),nickname(nk),phone_number(pn),darkest_secret(ds)
{

}

std::string Contact::getFirstName()
{
    return (first_name);
}

std::string Contact::getLastName()
{
    return (last_name);
}

std::string Contact::getNickName()
{
    return (nickname);
}




