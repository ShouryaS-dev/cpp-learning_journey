#include<iostream>

void foo()
{
    int num1 {5};
    int num2 {10};
    void* address_of_num1 = &num1;
    int* address_of_num2 = &num2;
    // The type before '*' indicates what type of value lives at that address
    // e.g. int* means "address of an int", void* means "address of unknown type"
    // void* can hold ANY address, but cannot be dereferenced directly
    // char* or bool* would be wrong here since num1 and num2 are ints
    std::cout<<address_of_num1<<"\n"<<address_of_num2<<"\n";
}


int main()
{

    std::cout<<"Checking foo()\n";
    foo();
    std::cout<<"======================\n";
    
    int a {5};
    int*b {&a};

    //& = "address of" operator
    std::cout<<"the address of a is "<<b<<std::endl;
    std::cout<<"the address of a is "<<&a<<std::endl;

    //* = "dereference" operator
    std::cout<<"the value at "<<&a<<" or "<<b<<" is "<<*b<<" or "<<*&a;
}

