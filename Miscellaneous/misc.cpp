#include<iostream>
using namespace std;


//[[maybe_unused]]
int foo()
{
    int a {2};
    double b {4.56};
    long long c {45664554};
    [[maybe_unused]] bool st {true};

    cout<<a<<endl<<b<<endl<<st;

    return 0;
}

//macro
#define name "Shourya";
int macro()
{
    std::cout<<"My name is "<<name;
    return 0;
}


// = delete
void printInt(int x)
{
    std::cout << x << '\n';
}

void printInt(char) = delete; // calls to this function will throw error
void printInt(bool) = delete; // Thsi too

int goo()
{
    printInt(97);   // okay

    // printInt('a');   compile error: function deleted
    // printInt(true);  compile error: function deleted

    // printInt(5.0);   compile error: ambiguous match

    return 0;
}
//Tells the compiler not to use this



//auto --> data type
//Tell ths compiler to figure data type itself
void print(auto x);
int tests()
{
    auto v1 { 12 / 4 }; // int / int => int
    auto v2 { 12.0 / 4 }; // double / int => double
    std::cout<<v1<<"\n"<<v2<<"\n";

    print("Hello");
    print("5");
    return 0;
}

void print(auto x)
{
    std::cout<<x<<"\n";
}
