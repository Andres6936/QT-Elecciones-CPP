#include "Urn.h"

Urn::Urn()
{
    candidate1 = Candidate("Frank", "Underwood", "Independiente", 27);
    candidate2 = Candidate("Claire", "Underwood", "Revolucionario", 26);
    candidate3 = Candidate("Barack", "Obama", "Tradicional", 26);
}

Candidate Urn::getCandidate1() const
{
    return candidate1;
}

Candidate Urn::getCandidate2() const
{
    return candidate2;
}

Candidate Urn::getCandidate3() const
{
    return candidate3;
}
