#include <iostream>
using namespace std;

//Sum of two numbers
void sum(int num1, int num2)
{

    cout<<"The Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
    
}

int age();

//Basic if else
int main()
{
    int num1, num2;
    cout<<"Enter your first number: "<<endl;
    cin>>num1;
    cout<<"Enter your second number: "<<endl;
    cin>>num2;

    if(num1+num2<10)
    {
        cout<<"Your sum is less than 10\n";
    }
    else if(num1+num2>10)
    {
        cout<<"Your sum is greater than to 10\n";
    }
    else if(num1+num2 == 10)
    {
        cout<<"Your sum is equal to 10\n";
    }

    sum(num1, num2);
    age();

    return 0;
}


int age()
{
    int age;
    cout<<"What's your age: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"you are eligible to drive";
    }

    else if ((age <18) && (age >0))
    {
        cout<<"You are not eligible to drive";
    }

    else
    {
        cout<<"Invalid age!";
    }
}
