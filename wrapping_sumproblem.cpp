#include <bits/stdc++.h>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentsum = 0, maxsum=INT_MIN;
    
	for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
    
	    if (currentsum < 0)  
            currentsum = 0;

        maxsum = max(currentsum, maxsum);
    }

    return maxsum;
}

int main()
{
    int n;
    int arr[50];
    int total = 0;
    int maximum;
    int wrap_sum,nonwrap_sum;
    cout << "Enter number of element in array";
    cin >> n;
    cout << "Enter a Array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     nonwrap_sum=kadane(arr,n);


    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
        arr[i] = -arr[i];
    }

    wrap_sum = total + kadane(arr, n);

    maximum=max(nonwrap_sum,wrap_sum);
    
    cout << "MAximum sum will be =" << maximum;

    return 0;

    
}
