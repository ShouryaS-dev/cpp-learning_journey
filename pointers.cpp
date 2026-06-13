#include<iostream>

int main()
{
    int a {5};
    int*b {&a};

    //& = "address of" operator
    std::cout<<"the address of a is "<<b<<std::endl;
    std::cout<<"the address of a is "<<&a<<std::endl;

    //* = "dereference" operator
    std::cout<<"the value at "<<&a<<" or "<<b<<" is "<<*b<<" or "<<*&a;
}

