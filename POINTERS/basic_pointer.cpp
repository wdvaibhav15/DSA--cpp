// #include<iostream>
// using namespace std;
//  int main(){
//     int  num = 10;
//     char ch = 'b';
//     int *ptrnum = &num;
//     char *ptrch = &ch;
//     cout<<"value of num "<<num<<endl;
//      cout<<"address of num "<< ptrnum <<endl;
//       cout<<"address of num "<< &num <<endl;

//       cout<<"value of ch "<<ch<<endl;
//       cout<<"value of ch "<<&ch<<endl;
//        cout<<"address of ch "<<ptrch<<endl;
 // int arr[5] = { 1,2,3,4,5};
//  // print the addtress of first element
 // int *ptr = arr;
//   cout<<arr<<endl;
//   cout<<arr+0<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<ptr<<endl;
//   // print the element of second index

//   cout<<arr+1<<endl;
//   cout<<&arr[1]<<endl;

//   // printing the value  of the address
//   cout<<arr[0]<<endl;
//   cout<<*arr<<endl;
//   cout<<*(arr+0)<<endl;
//   cout<<*ptr<<endl;
  // printing the all element of the array
  //  for (int i = 0; i < 5; i++)
  //  {
  //     cout<<*(arr+i)<<endl;
  //  }
  //  // printing the all addresses of the array
  //  for (int i = 0; i < 5; i++)
  //  {
  //     cout<<arr+i<<endl;
  //  }
  //  int arr[5] ={10,20,30,40,50};
  //  int *ptr = arr;
  //  cout<<"printing address using pointer"<<endl;
  //  for (int i = 0; i < 5; i++)
  //  {
  //   cout<<ptr+i<<endl;
      
  //  }
  //  cout<<"printing value using pointer"<<endl;
  //  for (int i = 0; i < 5; i++)
  //  {

  //   cout<<*(ptr+i)<<endl;
      
  //  }

   // about character  array
//     char arr[5] = {'a','b','c','d',};
//     char *ptr = arr;
//     cout<< arr<<endl;
//     cout<<ptr<<endl;
//     cout<<(void*)ptr<<endl;
//     cout<<(void*)&arr<<endl;

//     return 0;
   

//  }
#include<iostream>
using namespace std;
int main(){
   int a= 10;
   int *ptr = &a;
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<ptr<<endl;

   float f= 10.5;
   float *ptr2 = &f;
   cout<<f<<endl;
   cout<<&f<<endl;
   cout<<ptr2<<endl;

    char b = 'm';
    char *ptr1 = &b;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<ptr1<<endl;
    
}
