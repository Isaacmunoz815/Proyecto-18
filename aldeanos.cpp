#include "aldeanos.h"
#include <algorithm>
#include <fstream>

/// NOMBRE
void Aldeano::setNombredeAldeano(const string &nombredeAldeano)
{
    this->nombredeAldeano = nombredeAldeano;
}

string Aldeano::getNombredeAldeano() const
{
    return nombredeAldeano;
}

//// EDAD
void Aldeano::setEdad(size_t edad)
{
    this->edad = edad;
}

size_t Aldeano::getEdad() const
{
    return edad;
}


//// GENERO
void Aldeano::setGenero(const string &genero)
{
    this->genero = genero;
}

string Aldeano::getGenero()
{
    return genero;
}

//// SALUD
void Aldeano::setSalud(size_t salud)
{
    this->salud = salud;
}

size_t Aldeano::getSalud() const
{
    return salud;
}

