#include <iostream>
using namespace std;

const int SIZE = 17;

// Function to traverse and display scores for Algorithms
void traverseScores(int startIndex, int info[], int link[], const string& subject) {
    int current = startIndex;
    cout << subject << " scores:\n";

    while (current != 0) {
        if (info[current] > 75) {
            cout << "Score: " << info[current] << endl;
        }
        current = link[current]; // Move to the next node
    }
    cout << endl; // Separate the output for readability
}

int main() {
    cout << "23CS036\n";  // Student ID or heading

    // Linked list data for ALGO subject
    int INFO[SIZE] = {0, 74, 82, 84, 78, 74, 100, 0, 88, 62, 74, 93, 0, 0, 0, 0};
    int LINK[SIZE] = {0, 16, 14, 1, 0, 12, 8, 13, 10, 3, 2, 7, 6, 4, 0, 0};

    // Starting index for ALGO subject
    int ALGO = 11;

    // Display scores for Algorithms only
    traverseScores(ALGO, INFO, LINK, "Algorithms");

    return 0;
}
