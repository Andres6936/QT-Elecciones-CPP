#ifndef URN_H
#define URN_H

#include "Candidate.h"

class Urn
{

private:

    // Fields

    Candidate *candidate1;

    Candidate *candidate2;

    Candidate *candidate3;

public:

    // Cosntructs

    Urn();

    // Destructs

    ~Urn();

    // Getter Methods

    Candidate *getCandidate1() const;

    Candidate *getCandidate2() const;

    Candidate *getCandidate3() const;

    // Methods

    static void ingresarVotoTelevision(Candidate &candidate);

    static void ingresarVotoRadio(Candidate &candidate);

    static void ingresarVotoInernet(Candidate &candidate);

    unsigned int calcularTotalVotos();

    double calcularCostoPromedioCampanha();

    double calcularPorcentajeVotos(Candidate *candidate);

    void vaciarUrna();

    QString method1();

    QString method2();
};

#endif // URN_H
