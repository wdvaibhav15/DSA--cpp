#include <iostream>
using namespace std;

int countVowels(string str, int i) {
    if (i == str.length()) {
        return 0;
    }

    
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {

        return 1 + countVowels(str, i + 1);
    }

    
    return countVowels(str, i + 1);
}

int main() {
    string str;

    cout << "Enter the string: ";
    cin >> str;

    cout << "Number of vowels in "<<str<<" are : " << countVowels(str, 0);

}