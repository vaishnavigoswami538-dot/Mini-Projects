#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int attendance[100]; // assuming max 100 students
    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
        if (attendance[i] == 1)
            present++;
        else if (attendance[i] == 0)
            absent++;
    }

    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}

