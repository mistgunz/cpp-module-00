#include "Contact.h"

void Contact::set_fname(std::string fname)
{
    this->first_name = fname;
}

std::string Contact::get_fname()
{
    return (this->first_name);
}

int main()
{
    Contact one;
    one.set_fname("bob");
    std::cout << one.get_fname() ;
}