#ifndef ALDEANO_H
#define ALDEANO_H

#include<iostream>
#include<iomanip>

using namespace std;

class Aldeano
{
public:
    Aldeano() {}
    Aldeano(const string &nombredeAldeano,size_t edad, const string &genero, size_t salud)
    : nombredeAldeano(nombredeAldeano), edad(edad), genero(genero), salud(salud) {}

    void setNombredeAldeano(const string &nombredeAldeano);
    string getNombredeAldeano() const;

    void setEdad(size_t c);
    size_t getEdad() const;

    void setGenero(const string &c);
    string getGenero();

    void setSalud(size_t c);
    size_t getSalud() const;

    friend ostream& operator <<(ostream &out, const Aldeano &a)
    {
        out << left;
        out << setw(20) << a.nombredeAldeano;
        out << setw(5) << a.edad;
        out << setw(10) << a.genero;
        out << setw(5) << a.salud;

        return out;
    }

    friend istream& operator>>(istream &in, Aldeano &a)
    {

    cout <<"Nombre: ";
    getline(cin, a.nombredeAldeano);

    cout <<"Edad: ";
    cin>>a.edad;

    cout <<"Genero: ";
    cin>>a.genero;

    cout <<"Salud: ";
    cin>>a.genero;


    return in;
    }

     bool operator==(const Aldeano& a)
    {
        return nombredeAldeano == a.nombredeAldeano;
    }
    bool operator==(const Aldeano& a) const
    {
        return nombredeAldeano == a.nombredeAldeano;
    }
    bool operator<(const Aldeano& a) const
    {
        return nombredeAldeano < a.nombredeAldeano;
    }

private:
    string nombredeAldeano;
    size_t edad;
    string genero;
    size_t salud;

};




#endif
