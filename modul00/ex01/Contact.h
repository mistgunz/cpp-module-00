#pragma once

#include <string>
#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string number;
    std::string secret;

    public:
        void set_fname(std::string fname);
        std::string get_fname();
};

