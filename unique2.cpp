#include <bits/stdc++.h>
using namespace std;


bool setBit(int n,int pos){
if(n&(1<<pos))
  return true;
else 
  return false;
}


void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

   // now find position of set bit
   int tempxor=xorsum;
   int pos=0;
   int stbit=0;

   while(stbit!=1){
   stbit=xorsum&1;
   pos++;
   xorsum= xorsum>>1;
   }
  

  int newxor=0;
  for(int i=0;i<n;i++){
  if(setBit(arr[i],pos-1)){
        newxor=newxor^arr[i];
  }

  }

cout<<"One unique number is ="<<newxor;
int second=tempxor^newxor;
cout<<"\nSEcond unique number is= "<<second;
}

int main()
{

    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};

    unique(arr, 8);

    return 0;
}