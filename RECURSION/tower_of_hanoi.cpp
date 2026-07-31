#include<iostream>
using namespace std;
int stepCount = 0;
void TOH(int n, int source, int helper, int destination){
    if(n == 1){
        cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        stepCount++;
        return ;
    }
    TOH(n-1,source,destination,helper );
    cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    stepCount++;
    TOH(n-1,helper,source,destination );

}
int main(){
    int n;
    cout<<"ENter the number of disks :";
    cin>>n;
    int source = 1;
    int helper = 2;
    int destination = 3;
    TOH(n,source,helper,destination);
    cout<<endl;
    cout<<"Total Number of steps to take place : "<<stepCount;

}