// lru
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main ()
{
    cout<<"\nEnter size of reference string: ";
    int n; cin>>n;

    cout<<"Enter the refernce string: \n";
    vector<int> v(n),v_frames;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(i==0) v_frames.push_back(v[i]);
    }
    int frm,faults=0;
    cout<<"enter the no of page frames: ";
    cin>>frm;
    int x;

    for (int i = 1; i < n; i++)
    {
        bool flag= true;
        for (int j = 0; j < v_frames.size() ; j++)
        {
            if(v[i]== v_frames[j])
            {
                flag= false;
                x=j;
                break;
            }
        }
        if(flag)
        {
            if(v_frames.size() < frm)
            {
                v_frames.push_back(v[i]);
                faults++;
            }
            else
            {
                v_frames.erase(v_frames.begin());
                v_frames.push_back(v[i]);
                faults++;  
            }
        }

        else {
            int y = v_frames[x];
            v_frames.erase(v_frames.begin()+x);
            v_frames.push_back(y);
        }

    }
    cout<<"faults are: "<<faults+1;
return 0;
}

// 1 2 3 4 1 2 5 1 2 3 4 5 2 3 1 2 5