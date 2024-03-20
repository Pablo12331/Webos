#include<iostream>
#include<stdlib.h>
using namespace std;

class PO
{
    private://atributos
        int edad;
        string nombre;

    public:
        PO(int, string);

        void setEdad(int);

        void setNombre(string);
        
        int getEdad();
        
        string getNombre();
        
        void leer();
        
        void correr();

};

PO::PO(int edad, string nombre)
{
    this->edad = edad;
    this->nombre = nombre;
}

void PO::setEdad(int edad)
{
    this->edad = edad;
}

void PO::setNombre(string nombre)
{
    this->nombre = nombre;
}

int PO::getEdad()
{
    return this->edad;
}

string PO::getNombre()
{
    return this->nombre;
}

void PO::correr()
{
    cout<<"Me estoy corriendo"<<endl;
}

void PO::leer()
{

}