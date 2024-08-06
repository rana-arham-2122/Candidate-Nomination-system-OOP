#include "CandidateNomination.h"
#include<iostream>
#include<string>

using namespace std;

CandidateNomination::CandidateNomination()
{
    name = new string();
    age = new int(0);
    residence = new string();
    party = new string();
    education = new string();
}

CandidateNomination::~CandidateNomination()
{
    delete name;
    delete age;
    delete residence;
    delete party;
    delete education;
}

void CandidateNomination::setCandidateDetails(const string& candName, int candAge, const string& candResidence, const string& candParty, const string& candEducation) {
    *name = candName;
    *age = candAge;
    *residence = candResidence;
    *party = candParty;
    *education = candEducation;
}

void CandidateNomination::displayCandidateDetails(int id) const {
     cout << "ID: " << id <<  endl;
     cout << "Candidate's Name: " << *name <<  endl;
     cout << "Candidate's Age: " << *age <<  endl;
     cout << "Candidate's Residence: " << *residence <<  endl;
     cout << "Candidate's Party: " << (*party == "Independent" ? *party : "Association: " + *party) <<  endl;
     cout << "Candidate's Education: " << (*education == "l" ? "Not necessary" : *education) <<  endl;
}
