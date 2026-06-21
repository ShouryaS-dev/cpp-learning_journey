# include <iostream>


//Goto Statements
//Generally discouraged to use
//Use ONLY when exiting nested loops
//Just for the sake of neatness of code
int main()
{
    start:
    {
        std::cout<<"Enter a positive number: ";
        double a;
        std::cin>>a;
        if (a<0.0)
        {
            goto start;
        }
        std::cout<<a<<" is a positive number\n";
    }
    return 0;
}
