#include<iostream>

using namespace std;

int main()
{
    int a [10];

    for(int i = 1; i <= 10; ++i)
    {
        a[i - 1] = i;   
        cout<< a[i - 1]<<endl;
    }

    cout<< sizeof(a)/sizeof(*a);
}