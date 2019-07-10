#ifndef URN_H
#define URN_H

#include "Candidate.h"

class Urn
{

private:

    // Fields

    Candidate *candidate1 = new Candidate("Frank", "Underwood", "Independiente", 27);

    Candidate *candidate2 = new Candidate("Claire", "Underwood", "Revolucionario", 26);

    Candidate *candidate3 = new Candidate("Barack", "Obama", "Tradicional", 26);

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

    void ingresarVotoTelevision(Candidate candidate);

    void ingresarVotoRadio(Candidate candidate);

    void ingresarVotoInernet(Candidate candidate);

    unsigned int calcularTotalVotos();

    double calcularCostoPromedioCampanha();

    double calcularPorcentajeVotos(Candidate candidate);

    void vaciarUrna();

    QString method1();

    QString method2();
};

#endif // URN_H
