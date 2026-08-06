#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //object of ofstream
    ofstream file;
    file.open("numbers.txt");
    // checking file is there or not
    if(!file)
    {
        cout << "Unable to open file.";
        return 1;
    }
    // print original data
    file<<"Original data: "<<endl;
    // insert data
    for(int i = 0; i < n; i++)
    {
        file << arr[i] << " ";
    }
    // sorted data
    file << "\nSorted data: "<<endl;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        file << arr[i] << " ";
    }
    file.close();

    cout << "Data inserting/sorting successfully.";

    return 0;
}