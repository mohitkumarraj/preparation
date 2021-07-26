#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout << "Enter number of element in array";
    cin >> n;
    cout << "Enter a Array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Subarray are as follow \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                cout << arr[k]<< " ";
        
        cout << "\n";
        }
        
    }

    return 0;
}