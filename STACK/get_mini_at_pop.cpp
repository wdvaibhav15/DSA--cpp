#include <iostream>
#include <stack>
using namespace std;

// Function to push minimum elements
stack<int> _push(int arr[], int n)
{
    stack<int> st;

    int smallest = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }

        st.push(smallest);
    }

    return st;
}

// Function to print minimum at each pop
void _getMinAtPop(stack<int> st)
{
    cout << "Minimum values at each pop: ";

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st = _push(arr, n);

    _getMinAtPop(st);

    return 0;
}