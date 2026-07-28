// 10vectorprocessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Exauce Mukadi
//Tarrant County College
//Fall 2025
//10vectorprocessing

#include <iostream>
#include <vector>
using namespace std;

// Step 1: Display the contents of the vector
void showSeasonResults(const vector<char>& results) {
    // IPO: Output - if no values found
    if (results.empty()) {
        cout << "No values found" << endl;
        return;
    }

    // IPO: Output - heading and values
    cout << "Cowboys Season" << endl;
    for (char value : results) {
        cout << value << endl;
    }
}

// Step 2: Report total wins, losses, and ties
void reportTotals(vector<char> results) {
    // IPO: Processing - counters for game results
    int winCount = 0;
    int lossCount = 0;
    int tieCount = 0;

    // Display size of vector
    cout << "There are " << results.size() << " items in my Vector." << endl;

    // Traverse the vector and count W / L / T
    for (char game : results) {
        if (game == 'W') {
            winCount++;
        }
        else if (game == 'L') {
            lossCount++;
        }
        else if (game == 'T') {
            tieCount++;
        }
    }

    // Output totals
    cout << "Win count is " << winCount
        << " - Loss Count is " << lossCount
        << " - Ties Count is " << tieCount << endl;
}

int main() {
    // 3A: Create/Load Data
    // IPO: Input - Cowboys regular season game results (Weeks 1–13 + Bye)
    vector<char> cowboysResults = {
        'L', // Week 1
        'W', // Week 2
        'L', // Week 3
        'T', // Week 4
        'W', // Week 5
        'L', // Week 6
        'W', // Week 7
        'L', // Week 8
        'L', // Week 9
        'B', // Week 10 (Bye Week)
        'W', // Week 11
        'W', // Week 12
        'W'  // Week 13
    };

    // 3B: Call display method
    showSeasonResults(cowboysResults);
    cout << endl;

    // 3C: Call totals method
    reportTotals(cowboysResults);

    // Final message
    cout << "Done!" << endl;

    return 0;
}