#include <iostream>
#include <string>
#include <iomanip>
#include "CandidateNomination.h"
#include "MPA.h"
#include "MNA.h"

using namespace std;

const int MAX_CANDIDATES = 10;

int main()
{
    MPA mpaCandidates[MAX_CANDIDATES];
    MNA mnaCandidates[MAX_CANDIDATES];
    int mpaCandidateCount = 0;
    int mnaCandidateCount = 0;
    //MPA mpaCandidates[MAX_CANDIDATES]; // Declare array of MPA objects
    //int mpaCandidateCount = 0;
    //MNA mnaCandidates[MAX_CANDIDATES]; // Declare array of MNA objects
    //int mnaCandidateCount = 0;

    char choice;
    do
    {
        cout << setfill(' ') << setw(121) << "\n";
        cout << setfill(' ') << setw(35) << " " << "Select what you want from given below menu:" << endl;
        cout << setfill(' ') << setw(40) << " " << "1. Add Candidate" << endl;
        cout << setfill(' ') << setw(40) << " " << "2. Remove Candidate" << endl;
        cout << setfill(' ') << setw(40) << " " << "3. Change Candidate Data" << endl;
        cout << setfill(' ') << setw(40) << " " << "4. Print Candidate Details" << endl;
        cout << setfill(' ') << setw(40) << " " << "5. Exit \n " << endl;
        cout << setfill(' ') << setw(121) << "\n" << endl;

        cout << "Kindly! Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
        {
            int subChoice;
            cout << "1. Add MPA" << endl;
            cout << "2. Add MNA" << endl;
            cout << "3. Go Back" << endl;
            cout << endl;
            cout << "Enter your sub - choice: ";
            cin >> subChoice;
            cin.ignore();

            if (subChoice == 1)
            {
                mpaCandidates[mpaCandidateCount].registerMPACandidate(mpaCandidateCount);
            }
            else if (subChoice == 2)
            {
                mnaCandidates[mnaCandidateCount].registerMNACandidate(mnaCandidateCount);
            }
            else if (subChoice == 3)
            {
                //going back to main
            }
            else
            {
                cout << "Invalid sub-choice." << endl;
            }
            break;
        }
        case '2':
        {
            int subChoice;
            cout << "1. Remove MPA" << endl;
            cout << "2. Remove MNA" << endl;
            cout << "3. Go Back" << endl;
            cout << endl;
            cout << "Enter your sub-choice: ";
            cin >> subChoice;
            cin.ignore();

            if (subChoice == 1)
            {
                mpaCandidates[mpaCandidateCount].removeMPACandidate(mpaCandidateCount);
            }
            else if (subChoice == 2)
            {
                mnaCandidates[mnaCandidateCount].removeMNACandidate(mnaCandidateCount);
            }
            else if (subChoice == 3)
            {
                // Going back to main
            }
            else
            {
                cout << "Invalid sub-choice." << endl;
            }
            break;
        }
        case '3':
        {
            int subChoice;
            cout << "1. Change/Update MPA Details" << endl;
            cout << "2. Change/Update MNA Details" << endl;
            cout << "3. Go Back" << endl;
            cout << endl;
            cout << "Enter your sub-choice: ";
            cin >> subChoice;
            cin.ignore();

            if (subChoice == 1)
            {
                mpaCandidates[mpaCandidateCount].updateMPACandidateDetails(mpaCandidateCount);
            }
            else if (subChoice == 2)
            {
                mnaCandidates[mnaCandidateCount].updateMNACandidateDetails(mnaCandidateCount);
            }
            else if (subChoice == 3)
            {
                // Going back to main
            }
            else
            {
                cout << "Invalid sub-choice." << endl;
            }
            break;
        }
        case '4':
        {
            int subChoice;
            cout << "1. Print MPA Details List" << endl;
            cout << "2. Print MNA Details List" << endl;
            cout << "3. Go Back" << endl;
            cout << endl;
            cout << "Enter your sub-choice: ";
            cin >> subChoice;
            cin.ignore();

            if (subChoice == 1)
            {
                mpaCandidates[mpaCandidateCount].printMPADetails(mpaCandidateCount);
                std::cout << "Debug: mpaCandidateCount: " << mpaCandidateCount << std::endl;
            }
            else if (subChoice == 2)
            {
                mnaCandidates[mnaCandidateCount].printMNADetails(mnaCandidateCount);
                std::cout << "Debug: mnaCandidateCount: " << mnaCandidateCount << std::endl;
            }
            else if (subChoice == 3)
            {

                break;
            }
            else
            {
                cout << "Invalid sub-choice." << endl;
            }
            break;
        }
        case '5':
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
        }
    } while (choice != '5');

    return 0;
}
