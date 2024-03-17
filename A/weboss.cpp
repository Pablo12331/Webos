#include<iostream>


using namespace std;

int main()
{
    
    int a = 20;

    while(a != 10)
    {
        --a;
    }

    if(a == 10)
    {
        cout<< "Numero: " << a << endl;
    }
    else
    {
        cout<< "Ta malo" << endl;
    }

    int *b = &a;
    
    *b = 7;

    for(int i = 0; i < 3; ++i)
    {
        --*b;
        cout<<*b <<endl;
    }

    if(a == 4)
    {
        cout<< "Numero: " << a << endl;
    }
    else
    {
        cout<< "Ta malo" << endl;
    }

    return 0;
}