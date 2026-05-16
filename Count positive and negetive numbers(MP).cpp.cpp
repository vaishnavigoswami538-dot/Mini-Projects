#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100]; // assuming maximum 100 readings
    int positive = 0, negative = 0, zero = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}

