#include <iostream>
bool ask()
{
    std::cout <<  "chose y/n \n";
    char answer;
    std:: cin >> answer;
    if (answer == 'y')
        return true;
    return false;
}

void printarr()
{   
    int arr[] = {1,2,34,4 ,4 ,4};
    for(auto x : arr)
        std::cout << x << " " ;
}
int main()
{
    
    if (ask())
       { std::cout << "true \n";
        printarr();}
    else
        std::cout << "false \n";
}