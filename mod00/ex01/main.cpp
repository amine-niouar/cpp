#include <iostream>
#include "PhoneBook.hpp"


int main()
{
    // creating eight contacts
    Contact c1("amine","niouar","boy","879474","normal");
    Contact c2("amine","niouar","boy","879474","normal");
    Contact c3("amine","niouar","boy","879474","normal");
    Contact c4("amine","niouar","boy","879474","normal");
    Contact c5("amine","niouar","boy","879474","normal");
    Contact c6("amine","niouar","boy","879474","normal");
    Contact c7("amine","niouar","boy","879474","normal");
    Contact c8("amine","niouar","boy","879474","normal");

    PhoneBook pb;

    // adding the contacts to the phonebook
    pb.addContact(c1);
    pb.addContact(c2);
    pb.addContact(c3);
    pb.addContact(c4);
    pb.addContact(c5);
    pb.addContact(c6);
    pb.addContact(c7);
    pb.addContact(c8);


    // view the phonebook and search for a contact by index
    pb.search();
}
