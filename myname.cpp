#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 9;
    // sum of i,j is divisible by 4
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if ((i + j) % 4 == 0 || i == 2 && j % 4 == 0)
                cout << " $";
            else
                cout << "  ";
        }
        cout << "\n";
    }

  cout<<"\n";
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if (i == 0 || j == 0 || j ==4 || i == 3)
                cout << " %";
            else{
                cout<<"  ";
            }    
        }
        cout << "\n";
    }


//h
cout<<"\n";
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if (j == 0 ||i==2|| j==4)
                cout << " &";
            else{
                cout<<"  ";
            }    
        }
        cout << "\n";
    }










  cout<<"\n";
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if (i == 0 ||j==2|| i == 3)
                cout << " #";
            else{
                cout<<"  ";
            }    
        }
        cout << "\n";
    }


  
 cout<<"\n";
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if (i == 0 ||j==2)
                cout << " *";
            else{
                cout<<"  ";
            }    
        }
        cout << "\n";
    }



    return 0;
}