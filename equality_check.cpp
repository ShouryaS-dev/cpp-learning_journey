#include <iostream>


int check(int x, int y)
{
    return x == y;
}

int main()
{
    int num1, num2;
    std::cout<<"Enters two numbers seperated by a space eg - 3 5\n";
    std::cin>>num1;
    std::cin>>num2;

    if (check(num1, num2))
    {
        std::cout<<"Equal";
    }
    else
    {
        std::cout<<"your nums are NOT equal";
    }   
}
