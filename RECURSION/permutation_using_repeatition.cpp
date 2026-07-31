#include<iostream>
#include<vector>
using namespace std;

void permuation_repeatition(vector<int>&arr, int index, vector<vector<int>>&ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return ;
    }
    vector<bool>use(21,0);
    for(int i = index; i < arr.size(); i++)
    {
        if(use[arr[i] + 10] == 0)
        {
            swap(arr[index], arr[i]);
            permuation_repeatition(arr, index+1, ans);
            swap(arr[index], arr[i]);
            use[arr[i] + 10] = 1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array :";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    permuation_repeatition(arr, 0, ans);

    cout<<"The permutations are :"<<endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
