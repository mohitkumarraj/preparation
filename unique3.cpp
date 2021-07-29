#include <bits/stdc++.h>
using namespace std;

// bool getBit(int n, int pos)
// {
//     if (n & (1 << pos))
//         return true;
//     else
//         return false;
// }


bool getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}


int setBit(int n, int pos)
{
    return (n | (1 << pos));
}


int unique(int arr[], int n){
    int result = 0;
    for (int i = 0; i < 64; i++){
        int sum = 0;
        for (int i = 0; i < n; i++){
            if (getBit(arr[i], i)){
                sum++;
            }
        }
         if (sum % 3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1,3,2,3,4,2,1,1,3,2,3};

    cout << "unique number is =" << unique(arr, 10);

    return 0;
}