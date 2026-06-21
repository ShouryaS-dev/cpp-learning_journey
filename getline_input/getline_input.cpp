# include <iostream>


//Strings and input of more than one word
#include<string>
int main()
{
    std::string name {};
    std::cout<<"Enter your name: ";
    std::getline(std::cin>>std::ws, name);  //Basically remember this line. Used to input line with spaces

    int num {};
    std::string colour{};
    std::cout<<"Enter your age: ";
    std::cin>>num;
    std::cout<<"your favourite colour: ";
    std::cin>>colour;

    std::cout<<name<<", you are "<<num<<" years old and your favourite colour is "<<colour;

    return 0;
}
