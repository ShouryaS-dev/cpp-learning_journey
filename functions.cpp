#include <iostream>




void prompt()
{
    std::cout<<"Enter your number: ";
}

int input()
{
    int num{};
    std::cin>>num;

    return num;
}

int main()
{
    prompt();
    int num = input();

    std::cout<<num<<" doubled is "<<num*2;
}



/*
//parametres
int test(int num1, int num2)
{
    int a {num1 + num2};
    return a;
}

int main()
{
    std::cout<<test(5, 6);
}
*/

