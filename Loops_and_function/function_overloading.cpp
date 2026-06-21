# include <iostream>


//Function overloading
//different function with same name but diff parametres
int add(int a, int b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    double a, b, c;
    std::cout<<"Enter 3 numbers seperated by a space\neg - 15 3 48\n";
    std::cin>>a>>b>>c;

    std::cout<<add(a, b)<<std::endl<<add(b, c)<<std::endl<<add(a, b, c);
}
//They work just fine
//All functions can be normally called

