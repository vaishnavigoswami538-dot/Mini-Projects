#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int records[100];  // assuming maximum 100 days
    int totalProfit = 0, totalLoss = 0;

    for (int i = 0; i < n; i++) {
        cin >> records[i];

        if (records[i] > 0)
            totalProfit += records[i];
        else if (records[i] < 0)
            totalLoss += (-records[i]); // convert loss to positive
    }

    int netBalance = totalProfit - totalLoss;

    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
}

