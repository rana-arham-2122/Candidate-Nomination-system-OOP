#include "MPA.h"
#include <iostream>
#include<string>

using namespace std;

// ... (implementation of MPA methods)
const int MAX_CANDIDATES = 10;

void MPA:: registerMPACandidate(int& mpaCandidateCount)
{
    if (mpaCandidateCount < MAX_CANDIDATES)
    {
        string name, residence, party, education;
        int age;

        cout << "\nEnter MPA candidate's name: ";
        getline(cin, name);

        cout << "Enter MPA candidate's age (between 20 and 70): ";
        cin >> age;
        cin.ignore();

        if (age < 20 || age > 70)
        {
            cout << "Age must be between 20 and 70. This candidate won't be added." << endl;
            return;
        }

        cout << "Enter MPA candidate's residence: ";
        getline(cin, residence);

        cout << "Enter MPA candidate's party (or type 'Independent' if independent): ";
        getline(cin, party);

        if (party != "Independent")
        {
            cout << "Enter MPA candidate's associated party: ";
            string associatedParty;
            getline(cin, associatedParty);
            party = "Association: " + associatedParty;
        }

        cout << "Enter MPA candidate's education (type 'm' if more than M.A otherwise 'l'): ";
        getline(cin, education);

        if (education == "l")
        {
            cout << "Invalid education type. Education must be 'l' or 'm'. This candidate won't be added." << endl;
            return;
        }

        setCandidateDetails(name, age, residence, party, education);
        mpaCandidateCount++;

        cout << "MPA candidate added successfully." << endl;
    }
    else
    {
        cout << "Maximum MPA candidate limit reached." << endl;
    }

    char anotherCandidate;
    cout << "Do you want to enter another MPA candidate? (y/n): ";
    cin >> anotherCandidate;
    cin.ignore();

    if (anotherCandidate == 'y' || anotherCandidate == 'Y')
    {
        if (mpaCandidateCount < MAX_CANDIDATES)
        {
            // Recursive call to register another candidate
            registerMPACandidate(mpaCandidateCount);
        }
        else
        {
            cout << "Maximum MPA candidate limit reached." << endl;
        }
    }
}

void MPA:: removeMPACandidate(int& mpaCandidateCount)
{
    if (mpaCandidateCount > 0)
    {
        mpaCandidateCount--;
        cout << "MPA candidate removed successfully." << endl;
    }
    else
    {
        cout << "No MPA candidates to remove." << endl;
    }
}


void MPA:: updateMPACandidateDetails(int mpaCandidateCount)
{
    int candidateIndex;
    cout << "Enter the index of the MPA candidate you want to update: ";
    cin >> candidateIndex;
    cin.ignore();

    if (candidateIndex >= 0 && candidateIndex < mpaCandidateCount)
    {
        string name, residence, party, education;
        int age;

        cout << "\nEnter updated MPA candidate's name: ";
        getline(cin, name);

        cout << "Enter updated MPA candidate's age (between 20 and 70): ";
        cin >> age;
        cin.ignore();

        if (age < 20 || age > 70)
        {
            cout << "Age must be between 20 and 70. No changes made to candidate details." << endl;
            return;
        }

        cout << "Enter updated MPA candidate's residence: ";
        getline(cin, residence);

        cout << "Enter updated MPA candidate's party (or type 'Independent' if independent): ";
        getline(cin, party);

        if (party != "Independent")
        {
            cout << "Enter MPA candidate's associated party: ";
            string associatedParty;
            getline(cin, associatedParty);
            party = "Association: " + associatedParty;
        }

        cout << "Enter updated MPA candidate's education (type 'm' if more than M.A otherwise 'l'): ";
        getline(cin, education);

        if (education == "l")
        {
            cout << "Invalid education type. Education must be 'l' or 'm'. This candidate won't be added." << endl;
            return;
        }

        // Assuming setCandidateDetails is a member function of the MPA class
        setCandidateDetails(name, age, residence, party, education);

        cout << "MPA candidate details updated successfully." << endl;
    }
    else
    {
        cout << "Invalid index. No MPA candidate found at the specified index." << endl;
    }
}


void MPA:: printMPADetails(int mpaCandidateCount)
{
    cout << "Printing MPA Details List:" << endl;
    for (int i = 0; i < mpaCandidateCount; ++i)
    {
        cout << "MPA Candidate #" << i + 1 << " Details:" << endl;
        displayCandidateDetails(i + 1); // Assuming displayCandidateDetails is defined in CandidateNomination class
        cout << "---------------------------" << endl;
    }
}