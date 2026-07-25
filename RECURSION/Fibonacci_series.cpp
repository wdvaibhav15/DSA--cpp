// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n == 0){
//         return 0;
//     }else if(n == 1){
//         return 1;
//     }else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number :";
//     cin>>num;
//     cout<<"Fibonacci series of "<<num<<" is :"<<fibonacci(num)<<endl;

// }
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci series of " << num << " terms is: ";
    for (int i = 0; i < num; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}