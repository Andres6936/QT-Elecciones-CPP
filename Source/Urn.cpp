#include "Include/Urn.h"

Urn::Urn()
{

}

Urn::~Urn()
{
    delete candidate1;
    delete candidate2;
    delete candidate3;
}

Candidate *Urn::getCandidate1() const
{
    return candidate1;
}

Candidate *Urn::getCandidate2() const
{
    return candidate2;
}

Candidate *Urn::getCandidate3() const
{
    return candidate3;
}

void Urn::ingresarVotoTelevision(Candidate candidate)
{
    candidate.agregarVotoTelevision();
}

void Urn::ingresarVotoRadio(Candidate candidate)
{
    candidate.agregarVotoRadio();
}

void Urn::ingresarVotoInernet(Candidate candidate)
{
    candidate.agregarVotoInternet();
}

unsigned int Urn::calcularTotalVotos()
{
    return candidate1->getVotos() + candidate2->getVotos() + candidate3->getVotos();
}

double Urn::calcularCostoPromedioCampanha()
{
    double total = candidate1->getCostoCampanha() +
            candidate2->getCostoCampanha() + candidate3->getCostoCampanha();

    return total / 3;
}

double Urn::calcularPorcentajeVotos(Candidate candidate)
{
    double numeroVotosCandidato = candidate.getVotos();
    double votosTotales = calcularTotalVotos();

    return numeroVotosCandidato / votosTotales * 100;
}

void Urn::vaciarUrna()
{
    candidate1->reiniciarConteoVotos();
    candidate1->reiniciarCostoCampanha();

    candidate2->reiniciarConteoVotos();
    candidate2->reiniciarCostoCampanha();

    candidate3->reiniciarConteoVotos();
    candidate3->reiniciarCostoCampanha();
}

QString Urn::method1()
{
    return QString("Respuesta 1");
}

QString Urn::method2()
{
    return QString("Respuesta 2");
}
