#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0) return 1;

    return n*factorial(n-1);;
}

int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
     for(int i = 1; i <=5;i++)
     {
        for(int j = 0; j <i;j++)
        {
            cout<<combination(i-1,j)<<"  ";
        }
        cout<<endl;
     }

}