#include<bits/stdc++.h>
using namespace std;



int main(){
int sum=INT_MIN;
int temp=0;

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
                temp=temp+arr[k];               
        
        cout<<temp;
         if(temp>sum)
            sum=temp;
        temp=0;
        cout << "\n";
        }
        
    }


cout<<"the sum of max suba array is ="<<sum;
return 0;    
}