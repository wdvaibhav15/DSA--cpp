//-----------basic implementation of linked list static way----------
// #include<iostream>
// using namespace std;

// class NODE {
//     public:
//     int data;
//     NODE* next;
// };

// static way to form a node 
// int main(){
//     NODE N1;
//     N1.data = 10;
//     N1.next = NULL;
//     cout<<N1.data<<endl;
//     cout<<N1.next<<endl;
// }



//-----------basic implementation of linked list dynamic way-----------
// #include<iostream>
// using namespace std;

// class NODE {
//     public:
//     int data;
//     NODE* next;
// };

// dynamic way to initialize a node 
// int main(){
//     NODE *HEAD ;
//     HEAD= new NODE;
//     HEAD->data = 10;   // (*HEAD).data = 10;
//     HEAD->next = NULL; // (*HEAD).next = NULL;
//     cout<<HEAD->data<<endl;
//     cout<<HEAD->next<<endl;
// }


//--------basic implementation of linked list dynamic way using constructor-------
#include<iostream>
using namespace std;
class NODE {
    public:
    int data;
    NODE* next;

    NODE(int value){
        data = value;
        next = NULL;
    }
};

 
int main(){
    NODE *HEAD = new NODE(4);
   
}
