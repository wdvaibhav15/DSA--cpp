// // #include<iostream>
// // using namespace std;
// //  int main(){
// //     int  num = 10;
// //     char ch = 'b';
// //     int *ptrnum = &num;
// //     char *ptrch = &ch;
// //     cout<<"value of num "<<num<<endl;
// //      cout<<"address of num "<< ptrnum <<endl;
// //       cout<<"address of num "<< &num <<endl;

// //       cout<<"value of ch "<<ch<<endl;
// //       cout<<"value of ch "<<&ch<<endl;
// //        cout<<"address of ch "<<ptrch<<endl;
//  // int arr[5] = { 1,2,3,4,5};
// //  // print the addtress of first element
//  // int *ptr = arr;
// //   cout<<arr<<endl;
// //   cout<<arr+0<<endl;
// //   cout<<&arr[0]<<endl;
// //   cout<<ptr<<endl;
// //   // print the element of second index

// //   cout<<arr+1<<endl;
// //   cout<<&arr[1]<<endl;

// //   // printing the value  of the address
// //   cout<<arr[0]<<endl;
// //   cout<<*arr<<endl;
// //   cout<<*(arr+0)<<endl;
// //   cout<<*ptr<<endl;
//   // printing the all element of the array
//   //  for (int i = 0; i < 5; i++)
//   //  {
//   //     cout<<*(arr+i)<<endl;
//   //  }
//   //  // printing the all addresses of the array
//   //  for (int i = 0; i < 5; i++)
//   //  {
//   //     cout<<arr+i<<endl;
//   //  }
//   //  int arr[5] ={10,20,30,40,50};
//   //  int *ptr = arr;
//   //  cout<<"printing address using pointer"<<endl;
//   //  for (int i = 0; i < 5; i++)
//   //  {
//   //   cout<<ptr+i<<endl;
      
//   //  }
//   //  cout<<"printing value using pointer"<<endl;
//   //  for (int i = 0; i < 5; i++)
//   //  {

//   //   cout<<*(ptr+i)<<endl;
      
//   //  }

//    // about character  array
// //     char arr[5] = {'a','b','c','d',};
// //     char *ptr = arr;
// //     cout<< arr<<endl;
// //     cout<<ptr<<endl;
// //     cout<<(void*)ptr<<endl;
// //     cout<<(void*)&arr<<endl;

// //     return 0;
   

// //  }
// #include<iostream>
// using namespace std;
// int main(){
//    int a= 10;
//    int *ptr = &a;
//    cout<<a<<endl;
//    cout<<&a<<endl;
//    cout<<ptr<<endl;

//    float f= 10.5;
//    float *ptr2 = &f;
//    cout<<f<<endl;
//    cout<<&f<<endl;
//    cout<<ptr2<<endl;

//    char ch ='m';
//    char *ptr = &ch;
//    cout<<ch<<endl;
//    cout<<ptr<<endl;
//    cout<<*ptr<<endl;
//    cout<<(void*)ptr<<endl;
//    cout<<(void*)&ch<<endl;

    
    
// }

//  #include<iostream>
//  using namespace std ;
//  int main(){
//    int arr[5]= {1,2,3,4,5};
//    int *arrptr = &arr[0];
//    //address of the array
//    cout<<arrptr<<endl;
//    cout<<arr<<endl;
//    cout<<&*arrptr<<endl;
//    // values of the array 
//    cout<<*arrptr<<endl;
//    cout<<*(arr+0)<<endl;
//    cout<<*(arrptr+0)<<endl;

//    //address of the elements
//     for (int i=0;i<5;i++){
//       cout<<arr+i<<endl;
//     }

//     for (int i=0;i<5;i++){
//       cout<<&(arrptr)+i<<endl;
//     }
//     for (int i=0;i<5;i++){
//       cout<<&*(&(arrptr)+i)<<endl;
//     }
//     //addrvalues of the elements 
//     for (int i=0;i<5;i++){
//       cout<<arr[i]<<endl;
//     }

//     for (int i=0;i<5;i++){
//       cout<<*(arrptr+i)<<endl;
//     }
//     for (int i=0;i<5;i++){
//       cout<<*(arr+i)<<endl;
//     }


//  }
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5]={1,2,3,4,5};
//    int *arrptr1=arr;
//    int *arrptr2=&arr[0];
//    cout<<arrptr1<<endl;
//    cout<<arrptr2<<endl;

//    for (int i=0; i<5;i++){
//       cout<<*(arrptr1+i)<<endl;
//    }
//    for (int i=0; i<5;i++){
//       cout<<*(arrptr2+i)<<endl;
//    }
//    for (int i=0; i<5;i++){
//       cout<<*(arrptr1)<<endl;
//       arrptr1++;
//    }
//    for (int i=4; i>=0;i--){
//       cout<<arr[i]<<endl;
      
//    }
// }
// #include<iostream>
// using namespace std;
// int main(){
//    char arr[5]="1234";
//    char *ptr = arr;
//    cout<<arr<<endl;
//    cout<<ptr<<endl;

//    cout<<*ptr<<endl;

//    cout<<&arr<<endl;
//    cout<<(void*)arr<<endl;
//    cout<<(void*)ptr<<endl;

//    for(int i =0 ;i <5; i++){
//       cout<<arr[i]<<endl;
//    }
//    for (int i = 0; i < 5; i++) {
//     cout << (void*)&arr[i] << endl;
// }

//    for(int i =0 ;i <5; i++){
//       cout<<*(ptr+i)<<endl;
//    }
   
//    for(int i =0 ;i <5; i++){
//       cout<<(void*)(ptr+i)<<endl;
//    }
// } 

#include<iostream>
using namespace std;

void increasebtptr(int *mna){
    *mna = *mna + 1;
}
int increase(int mna){
   return mna++;
}
int main(){
   int num = 10;
   int temp = num ;
   cout<<num<<endl;
   cout<<increase(num)<<endl;
   cout<<temp<<endl;
   cout<<num<<endl;
   
   cout<<"using pointer"<<endl;
   cout<<"num: "<<num<<endl;
   
   increasebtptr(&num);
   cout<<"temp: "<<temp<<endl;
   
   cout<<"increase num: "<<num<<endl;


}