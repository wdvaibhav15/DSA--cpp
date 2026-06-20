// USING POINTER
// #include<iostream>
// using namespace std;
// void swap(int *ptr1 , int *ptr2){
//     int tem;
//     tem = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = tem;
    
// }
// int main(){
//     int frt_num =10;
//     int sec_num =20 ;
    
//     int *ptr1 = &frt_num;
//     int *ptr2 = &sec_num;

//     cout<<"before swap"<<endl;
//     cout<<"first number :"<<frt_num<<endl;
//     cout<<"second number :"<<sec_num<<endl;
    
    
//     swap(&frt_num , &sec_num);

//     cout<<"after swap"<<endl;
//     cout<<"first number :"<<frt_num<<endl;
//     cout<<"second number :"<<sec_num<<endl;
// }



//USING REFERENCE VARIABLE
#include<iostream>
using namespace std;

void swap(int &temp1 , int &temp2){
    int tem;
    tem = temp1;
    temp1 = temp2;
    temp2 = tem;
}
 int main(){
    int num1 =10;
    int num2 =20;
    int &temp1 =num1;
    int &temp2 =num2;
    cout<<"before swap"<<endl;
    cout<<"first number :"<<num1<<endl;
    cout<<"second number :"<<num2<<endl;
    
    swap(temp1 , temp2);
    
    cout<<"after swap"<<endl;
    cout<<"first number :"<<num1<<endl;
    cout<<"second number :"<<num2<<endl;
 }