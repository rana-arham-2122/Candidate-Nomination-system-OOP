#ifndef MPA_H
#define MPA_H

#include "CandidateNomination.h"

//const int MAX_CANDIDATES = 10;

class MPA : public CandidateNomination 
{
public:
    void registerMPACandidate(int& mpaCandidateCount);


    void removeMPACandidate(int& mpaCandidateCount);


    void updateMPACandidateDetails(int mpaCandidateCount);

    void printMPADetails(int mpaCandidateCount);


};

#endif // MPA_H