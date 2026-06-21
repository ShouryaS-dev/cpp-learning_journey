# include <iostream>

//User defined namespaces
//for eg...if two functions have the same name...to call them
// ::something() calls a function in the global namespace, not a user-defined namespace
namespace add
{
    int something(int x, int y)
    {
        return x+y;
    }
}

namespace subtract
{
    int something(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    int num1, num2;
    std::cout<<"Enter first number: ";
    std::cin>>num1;
    std::cout<<"Enter second number: ";
    std::cin>>num2;

    std::cout<<"their sum is "<<add::something(num1, num2)<<" and their difference is "<<subtract::something(num1, num2);
    std::cout<<"\nNOTE - difference is calculated "<<num1<<"-"<<num2;
    return 0;
}
//Nested namespace are also possible
//--> x::y::some_function()
