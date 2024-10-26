#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    a = 876;
    c = a+100;
    d = a-100;
    
    cout<<"Guess the number which value is a \n";
    start:
    cout<<"Enter the number :-";
    cin>>b;
    cout<<endl<<endl<<endl;
    if (a == b)
    {
        cout<<"Your answer is true\n Thanks for playing it";
    }
    else if (b >= c)
    {
        cout<<"The number is too high \nPlease try again\n";
        goto start; 

    }
    else if (b <= d)
    {
        cout<<"The number is too low \nPlease try again\n";
        goto start;
    }
    else if (b>a&&b<c)
    {
        cout<<"The Number is near by a , but it is some high\nPlease try again\n";
        goto start;
    }
    else if (b<a&&b>d)
    {
        cout<<"The Number is near by a , but it is some low\nPlease try again\n";
        goto start;
    }
   
    // else if (b == e)
    // {
    //     cout<<"true:";
    // }
    
    
    

    return 0;
}