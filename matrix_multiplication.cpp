#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[][3] = {{2, 3, 4},
                  {1, 2, 1},
                  {5, 1, 7}};


    int b[][3] = {{4, 5, 6},
                  {2, 1, 4},
                  {2, 0, 4}};


    int c[3][3];

    //yes compatible  3 3*3  3
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

            cout << c[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}