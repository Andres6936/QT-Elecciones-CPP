#include "Candidate.h"

Candidate::Candidate(QString nName, QString nApellido,
                     QString nPArtidoPolitico, unsigned int nEdad)
{
    name = nName;
    apellido = nApellido;
    partidoPolitico = nPArtidoPolitico;
    edad = nEdad;
    costoCampanha = 0.0;
    votos = 0;
}

QString Candidate::getName() const
{
    return name;
}

QString Candidate::getApellido() const
{
    return apellido;
}

QString Candidate::getPartidoPolitico() const
{
    return partidoPolitico;
}

unsigned int Candidate::getEdad() const
{
    return edad;
}

double Candidate::getCostoCampanha() const
{
    return costoCampanha;
}

unsigned int Candidate::getVotos() const
{
    return votos;
}

void Candidate::ingresarUnVoto()
{
    votos += 1;
}

void Candidate::agregarVotoTelevision()
{
    costoCampanha += 1000;
    ingresarUnVoto();
}

void Candidate::agregarVotoRadio()
{
    costoCampanha += 500;
    ingresarUnVoto();
}

void Candidate::agregarVotoInternet()
{
    costoCampanha += 100;
    ingresarUnVoto();
}

void Candidate::reiniciarConteoVotos()
{
    votos = 0;
}

void Candidate::reiniciarCostoCampanha()
{
    costoCampanha = 0.0;
}
