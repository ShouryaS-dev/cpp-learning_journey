# include <iostream>


//Type casting 
//static_cast<>()
int main()
{
    double pi = 3.14159;
    int x = static_cast<int>(pi);   // x = 3 (truncates decimal)
    // int test = pi; Also does the job BUT 

    int a = 5, b = 2;
    double result = static_cast<double>(a) / b;  // 2.5 (not 2)

    //without casting --> 5/2 = 2 (int division)

    //ststic_cast<>() is used to signify INTENT...and also silence compiler warning
}
