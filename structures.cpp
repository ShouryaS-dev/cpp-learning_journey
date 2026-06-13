#include <iostream>

typedef struct employee
{
    int eid;
    float salary;
    char fav_char;

}ep;

typedef struct student
{
    char grade;
    int marks;
    int roll_no;
}st;


int main()
{
    //Employee
    struct employee babloo;
    ep varun;
    ep abhishek;
    //"typedef" and "ep" lets us write just "ep" instead of struct employee
    //can use anyhting inplace of "ep"

    //student
    struct student ayush;
    st prakhar;
    st ram;
    //Defined all general categories
    //but no value stored in them

    varun.eid = 5;
    varun.salary = 100;
    babloo.fav_char = 'A';
    abhishek.salary = 5050;

    ayush.grade = 'B';
    ram.marks = 100;
    prakhar.roll_no = 21;
    
    std::cout<<varun.eid<<std::endl<<ram.marks;
    //output what u want
}
