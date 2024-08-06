#ifndef MNA_H
#define MNA_H

#include "CandidateNomination.h"

//const int MAX_CANDIDATES = 10;

class MNA : public CandidateNomination 
{
public:
    void registerMNACandidate(int& mnaCandidateCount);


    void removeMNACandidate(int& mnaCandidateCount);


    void updateMNACandidateDetails(int mnaCandidateCount);


    void printMNADetails(int mnaCandidateCount);
};

#endif // MNA_H