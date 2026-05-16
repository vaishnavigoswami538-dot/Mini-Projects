#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of students and number of days: ";
    cin >> n >> m;

    int bill[100][100];
    cout << "Enter the bill amounts:\n";

    // Input the bills
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    cout << "\n";

    // Step 1: Total for each student + find max spent
    int maxSpent = 0;

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += bill[i][j];
        }
        cout << "Student " << i + 1 << " total: ?" << total << endl;

        if (total > maxSpent)
            maxSpent = total;
    }

    // Step 2: Find day with highest collection
    int highestDay = 1;
    int highestSum = 0;

    for (int j = 0; j < m; j++) {
        int daySum = 0;
        for (int i = 0; i < n; i++) {
            daySum += bill[i][j];
        }

        if (daySum > highestSum) {
            highestSum = daySum;
            highestDay = j + 1;
        }
    }

    cout << "\nHighest collection on Day " << highestDay << endl;

    // Step 3: Print students who spent the most
    cout << "Highest spender: ";
    bool first = true;

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += bill[i][j];
        }

        if (total == maxSpent) {
            if (!first)
                cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }

    cout << endl;
    return 0;
}

