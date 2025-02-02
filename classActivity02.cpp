// classActivity02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string getCardRank(int rank) {
    switch (rank) {
    case 1: return "Ace";
    case 11: return "Jack";
    case 12: return "Queen";
    case 13: return "King";
    default: return to_string(rank);
    }
}

string getCardSuit(int suit) {
    switch (suit) {
    case 1: return "Clubs";
    case 2: return "Diamonds";
    case 3: return "Hearts";
    case 4: return "Spades";
    default: return "Invalid";
    }
}
void printCardDescription(const string& line1, const string& line2) {
    cout << "********************************" << endl;
    cout << "*                              *" << endl;
    cout << "* " << left << line1 << right << string(28 - line1.length() - line2.length(), '-') << line2 << " *" << endl;
    cout << "*                              *" << endl;
    cout << "********************************" << endl;
}
int main()
{
    long elapsedSeconds = time(nullptr);
    srand(elapsedSeconds);

    int cardRank = (rand() % 13) + 1;
    int cardSuit = (rand() % 4) + 1;

    string rank = getCardRank(cardRank);
    string suit = getCardSuit(cardSuit);
    string card = rank + " of " + suit;
    string line1 = "Casino Card:";
    
    printCardDescription("Card Display:", card);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
