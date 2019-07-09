#ifndef URN_H
#define URN_H

#include "Candidate.h"

class Urn
{

private:

    // Fields

    Candidate candidate1 = Candidate("Frank", "Underwood", "Independiente", 27);

    Candidate candidate2 = Candidate("Claire", "Underwood", "Revolucionario", 26);

    Candidate candidate3 = Candidate("Barack", "Obama", "Tradicional", 26);

public:

    // Cosntructs

    Urn();

    // Methods

    Candidate getCandidate1() const;

    Candidate getCandidate2() const;

    Candidate getCandidate3() const;
};

#endif // URN_H
