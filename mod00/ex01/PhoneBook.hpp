#include "Contact.hpp"

class PhoneBook
{
    private:
        int index;
        Contact contacts[8];
    public:
        PhoneBook();
        void addContact(Contact c);
        void wide(std::string s,int index);
        void search();
};


