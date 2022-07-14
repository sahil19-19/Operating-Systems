// SCAN
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int head,n,sum=0;
    cout<<"enter size of string :";
    cin>>n;
    vector<int> v(n+1);
    cout<<"enter the string \n";
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    cout<<"enter head :";
    cin>>v[0];
    head= v[0];
    v.push_back(0);
    sort(v.begin(),v.end());
    //moving towards left first
    sum = v[n+1];
    cout<<sum+head;
    
return 0;
}

// 96 189 75 133 14 129 70 67
// 53