#include "MNA.h"
#include <iostream>
#include<string>

using namespace std;

// ... (implementation of MNA methods)

const int MAX_CANDIDATES = 10;

void MNA:: registerMNACandidate(int& mnaCandidateCount)
{
    if (mnaCandidateCount < MAX_CANDIDATES)
    {
        string name, residence, party, education;
        int age;

        cout << "\nEnter MNA candidate's name: ";
        getline(cin, name);

        cout << "Enter MNA candidate's age (between 20 and 70): ";
        cin >> age;
        cin.ignore();

        if (age < 20 || age > 70)
        {
            cout << "Age must be between 20 and 70. This candidate won't be added." << endl;
            return;
        }

        cout << "Enter MNA candidate's residence: ";
        getline(cin, residence);

        cout << "Enter MNA candidate's party (or type 'Independent' if independent): ";
        getline(cin, party);

        if (party != "Independent")
        {
            cout << "Enter MNA candidate's associated party: ";
            string associatedParty;
            getline(cin, associatedParty);
            party = "Association: " + associatedParty;
        }

        cout << "Enter MNA candidate's education (type 'm' if more than M.A otherwise 'l'): ";
        getline(cin, education);

        if (education == "l")
        {
            cout << "Invalid education type. Education must be 'l' or 'm'. This candidate won't be added." << endl;
            return;
        }

        setCandidateDetails(name, age, residence, party, education);
        mnaCandidateCount++;

        cout << "MNA candidate added successfully." << endl;
    }
    else
    {
        cout << "Maximum MNA candidate limit reached." << endl;
    }

    char anotherCandidate;
    cout << "Do you want to enter another MNA candidate? (y/n): ";
    cin >> anotherCandidate;
    cin.ignore();

    if (anotherCandidate == 'y' || anotherCandidate == 'Y')
    {
        if (mnaCandidateCount < MAX_CANDIDATES)
        {
            // Recursive call to register another candidate
            registerMNACandidate(mnaCandidateCount);
        }
        else
        {
            cout << "Maximum MNA candidate limit reached." << endl;
        }
    }
}

void MNA:: removeMNACandidate(int& mnaCandidateCount)
{
    if (mnaCandidateCount > 0)
    {
        mnaCandidateCount--;
        cout << "MNA candidate removed successfully." << endl;
    }
    else
    {
        cout << "No MNA candidates to remove." << endl;
    }
}

void MNA:: updateMNACandidateDetails(int mnaCandidateCount)
{
    int candidateIndex;
    cout << "Enter the index of the MNA candidate you want to update: ";
    cin >> candidateIndex;
    cin.ignore();

    if (candidateIndex >= 0 && candidateIndex < mnaCandidateCount)
    {
        string name, residence, party, education;
        int age;

        cout << "\nEnter updated MNA candidate's name: ";
        getline(cin, name);

        cout << "Enter updated MNA candidate's age (between 20 and 70): ";
        cin >> age;
        cin.ignore();

        if (age < 20 || age > 70)
        {
            cout << "Age must be between 20 and 70. No changes made to candidate details." << endl;
            return;
        }

        cout << "Enter updated MNA candidate's residence: ";
        getline(cin, residence);

        cout << "Enter updated MNA candidate's party (or type 'Independent' if independent): ";
        getline(cin, party);

        cout << "Enter updated MNA candidate's education (type 'm' if more than M.A otherwise 'l'): ";
        getline(cin, education);

        if (party != "Independent")
        {
            cout << "Enter MNA candidate's associated party: ";
            string associatedParty;
            getline(cin, associatedParty);
            party = "Association: " + associatedParty;
        }

        if (education == "l")
        {
            cout << "Invalid education type. Education must be 'l' or 'm'. This candidate won't be added." << endl;
            return;
        }



        // Assuming setCandidateDetails is a member function of the MNA class
        setCandidateDetails(name, age, residence, party, education);

        cout << "MNA candidate details updated successfully." << endl;
    }
    else
    {
        cout << "Invalid index. No MNA candidate found at the specified index." << endl;
    }
}

void MNA:: printMNADetails(int mnaCandidateCount)
{
    cout << "Printing MNA Details List:" << endl;
    for (int i = 0; i < mnaCandidateCount; ++i)
    {
        cout << "MNA Candidate #" << i + 1 << " Details:" << endl;

        displayCandidateDetails(i + 1); // Assuming displayCandidateDetails is defined in CandidateNomination class
        cout << "---------------------------" << endl;
    }
}