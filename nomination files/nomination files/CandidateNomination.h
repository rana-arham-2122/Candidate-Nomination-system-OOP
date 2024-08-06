#ifndef CANDIDATENOMINATION_H
#define CANDIDATENOMINATION_H

#include <iostream>
#include <string>

class CandidateNomination {
protected:
    std::string* name;
    int* age;
    std::string* residence;
    std::string* party;
    std::string* education;

public:
    CandidateNomination(); // Constructor
    ~CandidateNomination(); // Destructor

    void setCandidateDetails(const std::string& candName, int candAge, const std::string& candResidence, const std::string& candParty, const std::string& candEducation);
    void displayCandidateDetails(int id) const;

    const std::string& getCandidateName() const {
        return *name;
    }
};

#endif // CANDIDATENOMINATION_H
