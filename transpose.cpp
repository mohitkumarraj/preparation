#include<bits./stdc++.h>
using namespace std;

void swap(int &a,int &b){
int temp;
 temp=a;
 a=b;
 b=temp;
}

int main(){

     int arr[5][6] = {{1, 5, 7, 9, 10, 11},
                     {6, 10, 12, 13, 20, 21},
                     {9, 25, 29, 30, 32, 40},
                     {15, 55, 59, 63, 68, 70},
                     {40, 70, 79, 81, 95, 105}};


cout<<"Original Matrix is = \n";
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }


cout<<"\nTranspose Matrix is = \n";
for (int i = 0; i < 5; i++)
    {
        for (int j = i; j< 6; j++)
        {
           swap(arr[i][j],arr[j][i]);
        }
    }

for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }















 return 0;   
}