#include<iostream>


//unions are basically structures where it holds only 1 data at a time
/*
if i declare marks...ok
but if grade is declared after that...using marks = error
used for better data space management
*/ 
union subject
{
    int marks;
    char grade;
};

int main()
{
    union subject phy;
    phy.marks = 100;

    // phy.grade = 'A' if this is done...marks will have garbage value
    // but printing grade will be fine
    //marks was overwritten by grade 

    std::cout<<phy.marks<<std::endl;


    enum meal {breakfast, lunch, dinner};

    std::cout<<breakfast<<std::endl;
    std::cout<<lunch<<std::endl;
    std::cout<<dinner<<std::endl;

    int a = breakfast;

    std::cout<<a;
    return 0;
}


//Enums are basically another way of storing numbers in order
//so like if i say a = breakfast....a = 0 and so on
//basically for our convinience of seeing data
 
