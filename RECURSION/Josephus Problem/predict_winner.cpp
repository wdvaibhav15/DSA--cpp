//--------------------- using extra space-----------------------//

// #include <iostream>
// #include <vector>
// using namespace std;

// int winner(vector<bool>& person, int n, int index, int personLeft, int k) {
//     // Only one person remains alive
//     if (personLeft == 1) {
//         for (int i = 0; i < n; i++) {
//             if (person[i] == 0 ) {
//                 return i;
//             }
//         }
//     }

//     int count = 0;

//     // Count k alive people
//     while (count < k) {
//         if (person[index] == false) {
//             count++;
//         }

//         if (count < k) {
//             index = (index + 1) % n;
//         }
//     }

//     // Eliminate the kth person
//     person[index] = true;

//     // Move to the next alive person
//     do {
//         index = (index + 1) % n;
//     } while (person[index] == true);

//     return winner(person, n, index, personLeft - 1, k);
// }

// int main() {
//     int n;
//     cout << "Enter the number of persons: ";
//     cin >> n;

//     int k;
//     cout << "Enter the elimination position: ";
//     cin >> k;

//     vector<bool> person(n, false);

//     int result = winner(person, n, 0, n, k);

//     // Add 1 because vector indexes start from 0
//     cout << "The winner is person number: " << result + 1 << endl;

//     return 0;
// }

// --------------- reduce space complexity ---------------------//


#include <iostream>
#include <vector>
using namespace std;

int winner(int n, int k){
    if(n == 1){
        return 0;
    }
    return (winner(n-1,k) + k) % n;
}

int main() {
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;

    int k;
    cout << "Enter the elimination position: ";
    cin >> k;

    

    int result = winner(n,k);

    // Add 1 because vector indexes start from 0
    cout << "The winner is person number: " << result + 1 << endl;

    return 0;
}