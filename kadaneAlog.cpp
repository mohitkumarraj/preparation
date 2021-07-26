#include<bits/stdc++.h>

using namespace std;
int main(){

int arr[50];
    int n;
    int max=INT_MIN;
    int currentsum=0;
    int mam;
    cout << "Enter number of element in array";
    cin >> n;
    cout << "Enter a Array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for(int i=0;i<n;i++){
      currentsum+=arr[i];
     
      if(currentsum<0)
        currentsum=0;
      mam = std::max(currentsum,mam);
    }


cout<<"THe sum of max subarray is="<<mam;
return 0;
}
