#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    string reversed = "";
    // Create the reversed version of the string
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    // Check if the word is same as its reverse
    if (word == reversed) {
        cout << "Perfect Secret Word";
    } else {
        cout << "Not a Secret Word";
    }

    return 0;
}

