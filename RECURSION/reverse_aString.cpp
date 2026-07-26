#include<iostream>
using namespace std;

string reverse(string str, int i, int j) {
    if (i >= j) {
        return str;
    }
    swap(str[i], str[j]);
    return reverse(str, i + 1, j - 1);
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Reverse string of " << str << " is : " << reverse(str, 0, str.length() - 1);
    return 0;
}