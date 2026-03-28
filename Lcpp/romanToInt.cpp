#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        
        int current = 0;
        int next = 0;

        // Give each letter a value
        if (s[i] == 'I') current = 1;
        else if (s[i] == 'V') current = 5;
        else if (s[i] == 'X') current = 10;
        else if (s[i] == 'L') current = 50;
        else if (s[i] == 'C') current = 100;
        else if (s[i] == 'D') current = 500;
        else if (s[i] == 'M') current = 1000;

        // Check the next letter too
        if (s[i+1] == 'I') next = 1;
        else if (s[i+1] == 'V') next = 5;
        else if (s[i+1] == 'X') next = 10;
        else if (s[i+1] == 'L') next = 50;
        else if (s[i+1] == 'C') next = 100;
        else if (s[i+1] == 'D') next = 500;
        else if (s[i+1] == 'M') next = 1000;

        // If current is smaller than next, subtract
        // Otherwise just add
        if (current < next)
            result -= current;
        else
            result += current;
    }

    return result;
}

int main() {
    string input;
    cout << "Enter Roman numeral: ";
    cin >> input;

    cout << "Number: " << romanToInt(input) << endl;

    return 0;
}   
