#include <iostream>
using namespace std;

void func(char* char_ptr) 
{
    int* d_ptr = (int*) char_ptr;
    //(*d_ptr) = 5.0;
    cout << "Value of pointer after cast in func(): " << *d_ptr << endl;
}

int main() 
{ 
    char *tmp = new char;
    *tmp = 'b';
    cout << "Value of pointer before calling func(): " << (*tmp) << endl ;
    func(tmp);
    return 0; 
}

