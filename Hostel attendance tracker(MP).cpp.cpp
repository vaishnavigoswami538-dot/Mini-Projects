#include <iostream>
using namespace std;

int main() {
    int A[10][7];  // 10 students × 7 days

    cout << "Enter attendance (1 = Present, 0 = Absent):\n";

    // Input attendance for all students
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nWeekly Attendance Summary";
    cout << "\n-------------------------\n";

    // (a) Calculate and print total days each student was present
    int highest = 0;      // highest attendance count
    int topper = 1;       // student number with highest attendance

    for (int i = 0; i < 10; i++) {
        int count = 0;    // reset counter for each student
        for (int j = 0; j < 7; j++) {
            count += A[i][j];  // add 1s
        }
        cout << "Student " << i + 1 << ": " << count << endl;

        if (count > highest) {  // check who has highest
            highest = count;
            topper = i + 1;
        }
    }

    cout << "\nStudent with Highest Attendance: Student " 
         << topper << " (" << highest << " Days)\n";

    // (b) Find day with lowest attendance
    int lowestDay = 1;
    int lowestCount = 9999; // start with a big number

    for (int j = 0; j < 7; j++) {
        int sum = 0; // total attendance for that day
        for (int i = 0; i < 10; i++) {
            sum += A[i][j];
        }

        if (sum < lowestCount) {
            lowestCount = sum;
            lowestDay = j + 1;
        }
    }

    cout << "Day with Lowest Overall Attendance: Day " << lowestDay << endl;

    return 0;
}

