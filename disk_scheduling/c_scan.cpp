// C-SCAN
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,sum=0, head;
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
    v.push_back(0); // vector now of size n+2
    sort(v.begin(),v.end());
    auto it = find(v.begin(),v.end(),head);
    int ind = it- v.begin();
    sum = 199 - v[ind+1];
    sum+= ( head + 199);
    cout<<sum<<endl;
return 0;
}

// 96 189 75 133 14 129 70 67
// 53