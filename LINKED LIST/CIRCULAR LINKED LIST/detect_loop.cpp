// #include <iostream>
// #include <unordered_map>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// int main() {
//     node* head = NULL;
//     node* tail = NULL;

//     int n;
//     cout << "Enter number of nodes: ";
//     cin >> n;

//     cout << "Enter elements: ";
//     // Create singly linked list
//     for (int i = 0; i < n; i++) {

//         int value;
//         cin >> value;
//         node* temp = new node(value);
//         if (head == NULL) {
//             head = temp;
//             tail = temp;
//         }
//         else {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     if (head != NULL && head->next != NULL) {
//         tail->next = head->next;
//     }
    
//     unordered_map<node*, bool> visited;
//     node* current = head;
//     bool loopFound = false;
//     while (current != NULL) {
//         if (visited[current] == true) {
//             loopFound = true;
//             break;
//         }
//         visited[current] = true;
//         current = current->next;
//     }

//     if (loopFound) {
//         cout << "\nLoop is present in the linked list.";
//     }
//     else {
//         cout << "\nLoop is not present in the linked list.";
//     }

//     return 0;

// }

#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};
int main() {
    node* head = NULL;
    node* tail = NULL;
    for (int i = 1; i <= 10; i++) {
        node* temp = new node(i);
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    node* node4 = head;
    while (node4->data != 4) {
        node4 = node4->next;
    }
    tail->next = node4;
    unordered_map<node*, bool> visited;
    node* current = head;
    while (current != NULL) {
        if (visited[current] == true) {
            cout << "Loop is present." << endl;
            cout << "Loop starts at node: "
                 << current->data << endl;
            break;
        }

        cout << "Visiting node: " << current->data << endl;
        visited[current] = true;
        current = current->next;
    }

    return 0;
}