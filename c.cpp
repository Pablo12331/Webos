#include<iostream>

using namespace std;

int main()
{
    int edad;
    string sexo;
    float altura;

    cout<<"Deme su edad: "; cin>> edad;
    cout<<"Digame su sexo: "; cin>> sexo;
    cout<<"Deme su estatura: "; cin>> altura;

    cout<<"\nSu edad es: "<< edad 
        << "\nSu sexo es: "<< sexo 
        <<"\nSu estatura es: "<< altura <<endl;
        
    return 0;
}