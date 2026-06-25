#include <iostream>




int intro_alias()
{

    int a = 5;
    int& ref = a;  // ref is now another name for a (alias of a)

    ref = 2;       // This changes a's value to 2!

    // Now both a and ref are 2 (again..not technically 'both')
    // They share the same memory address...they are ONE
    
    //Now lets say
    int* b = &a; //b is now a pointer (can also write ref in place of a)

    // --> *b is the value at address b
    (*b)++; //makes a = 3

    std::cout<<ref<<"\n";
    std::cout<<a<<"\n";

    //Both same = 3

    return 0;
}


int addone_copy(int x) //creats a copy
{
    return ++x;
}

void addone_ref(int& x) //used to change/modify the actual variable
{
    x++;
}

int main() 
{
    std::cout<<"Trying intro_alias()\n";
    intro_alias();
    std::cout<<"===========================\n";
    int a = 5;

    std::cout << addone_copy(a) << "\n";  // prints 6
    std::cout << a << "\n";               // a is still 5

    addone_ref(a);
    std::cout << a << "\n";               // a is now 6

    return 0;
}

