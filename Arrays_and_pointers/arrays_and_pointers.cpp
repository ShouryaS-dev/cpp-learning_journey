#include<iostream>

void using_loops();

int main()
{
    int marks[] = {5, 12, 45, 56} ;
    //optioanl --> can also write marks[4]
    //arrays are mutable

    marks[2] = 100;
    // 45 is changed to 100

    int score[2];
    score[0] = 2;
    score[1] = 1;

    //std::cout<<marks<<std::endl<<score[1];
    //prints address of array marks

    //to print whole array use loop
    for(int i{0}; i <=3; i++)
    {
        std::cout<<marks[i]<<std::endl;
    }

    int a = 0;

    std::cout<<"With while loop\n";

    while(a<4)
    {
        std::cout<<marks[a]<<std::endl;

        a++;
    }

    std::cout<<"Pointers\n";

    int*p {marks};

    std::cout<<p<<std::endl;
    std::cout<<p+1<<std::endl;
    //This gives the address of marks[0] and marks[1] respectively

    //To access their data
    std::cout<<*p<<std::endl;
    std::cout<<*(p+1)<<std::endl<<*(p+2)<<std::endl;

    using_loops();

    return 0;
}

void using_loops()
{
    std::cout<<"\nThis is from new function\nI'll be using loops here\n\n";

    int price[] = {50, 60, 70, 80, 90, 100};

    int*p = price;

    for(int i = 0; i < 6; i++)
    {
        std::cout<<"At "<<i<<"th index of array 'price' is value "<<*(p+i)<<" and its address is "<<(p+i)<<std::endl;
    }
}

