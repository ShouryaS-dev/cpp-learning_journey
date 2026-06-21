# include <iostream>

//Swapping values using pointers
void swap(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};


int main()
{
    int num1;
    int num2;
    std::cout<<"enter first number: ";
    std::cin>>num1;
    std::cout<<"Enter second number: ";
    std::cin>>num2;

    std::cout<<"First number is "<<num1<<" and second number is "<<num2<<std::endl;

    swap(&num1, &num2);     //works because we are swapping from their root, i.e their addresses

    std::cout<<"Now first number is "<<num1<<" and second number is "<<num2;
    return 0;
}
