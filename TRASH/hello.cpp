#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> words = {{1,2},{7,8},{4,5}};

    sort(words.begin(), words.end());

    for(int i = 0; i < words.size();i++)
    {
        
        for(int j = 0; j< words.size();j++)
        {
            cout << words[i][j] <<" ";
        }
        cout<<endl;
    }
   

    




}