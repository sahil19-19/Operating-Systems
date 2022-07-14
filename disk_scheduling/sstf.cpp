// sstf
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int head,n;
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
    int sum=0;
    int y=0,x;
    for (int i = 0; i < n; i++)
    {
        int min=INT_MAX;
        for (int j = 1; j <= n-i; j++)
        {
            if(max((v[j]-head),(head-v[j])) < min)
            {
                min =max((v[j]-head),(head-v[j]));
                x=j;
            }
        }
        sum+= min;
        y=v[x];
        v.erase(v.begin()+x);
        // y=x;
        head = y;

    }
    cout<<sum<<endl;
return 0;
}


// 96 189 75 133 14 129 70 67
// 53


