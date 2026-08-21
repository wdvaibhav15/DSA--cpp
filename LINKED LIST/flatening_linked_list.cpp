// class Solution {
//     // code for merge two linked list
//     Node * merge(Node * head1, Node * head2){
//         Node * head = new Node (0);
//         Node * tail = head;
//         while(head1 && head2){
//             if(head1 -> data <= head2 -> data){
//                 tail -> bottom = head1;
//                 head1 = head1 -> bottom;
//                 tail = tail -> bottom;
//                 tail -> bottom = NULL;
//             }else{
//                 tail -> bottom = head2;
//                 head2 = head2 -> bottom;
//                 tail = tail -> bottom;
//                 tail -> bottom = NULL;
//             }
//         }
//         if(head1){
//             tail -> bottom = head1;
//         }else{
//             tail -> bottom = head2;
//         }
//         return head -> bottom;
//     }
//   public:
//     Node* flatten(Node* root) {
//         // code here
//         Node * head1;
//         Node * head2;
//         Node * head3;
//         while(root -> next){
//             head1 = root;
//             head2 = root -> next;
//             head3 = root -> next -> next;
//             head1 -> next = NULL;
//             head2 -> next = NULL;
//             root = merge(head1, head2);
//             root -> next = head3;
//         }
//         return root;
        
//     }
// };
#include <iostream>
using namespace std;

// Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};

int main() {
    /*
       Input list structure:
       5 -> 10 -> 19 -> 28
       |    |     |     |
       7    20    22    35
       |          |     |
       8          50    40
       |                |
       30               45
    */

    // 1st list
    Node* root = new Node(5);
    root->bottom = new Node(7);
    root->bottom->bottom = new Node(8);
    root->bottom->bottom->bottom = new Node(30);

    // 2nd list
    root->next = new Node(10);
    root->next->bottom = new Node(20);

    // 3rd list
    root->next->next = new Node(19);
    root->next->next->bottom = new Node(22);
    root->next->next->bottom->bottom = new Node(50);

    // 4th list
    root->next->next->next = new Node(28);
    root->next->next->next->bottom = new Node(35);
    root->next->next->next->bottom->bottom = new Node(40);
    root->next->next->next->bottom->bottom->bottom = new Node(45);

    // --- Flattening Logic using your pointers ---
    Node* head1;
    Node* head2;
    Node* head3;

    while (root && root->next) {
        head1 = root;
        head2 = root->next;
        head3 = root->next->next;

        head1->next = nullptr;
        head2->next = nullptr;

        // Merge head1 and head2 along the bottom pointer
        Node* dummy = new Node(0);
        Node* tail = dummy;

        while (head1 && head2) {
            if (head1->data <= head2->data) {
                tail->bottom = head1;
                head1 = head1->bottom;
                tail = tail->bottom;
                tail->bottom = nullptr;
            } else {
                tail->bottom = head2;
                head2 = head2->bottom;
                tail = tail->bottom;
                tail->bottom = nullptr;
            }
        }

        if (head1) {
            tail->bottom = head1;
        } else {
            tail->bottom = head2;
        }

        root = dummy->bottom;
        delete dummy; // Clean up temporary node
        root->next = head3;
    }

    // --- Print the Flattened List ---
    cout << "Flattened Linked List:\n";
    Node* temp = root;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->bottom != nullptr) {
            cout << " -> ";
        }
        temp = temp->bottom;
    }
    cout << " -> NULL\n";

    return 0;
}