#include<iostream>
using namespace std;

//To handle very specifics --> swich()
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    switch(age)
    {
        case 18:
            cout<<"You are 18";
            break;

        case 20:
            cout<<"you are "<<age;
            break;

        default:
            cout<<"You are neither 18 nor 20";
    }
}
