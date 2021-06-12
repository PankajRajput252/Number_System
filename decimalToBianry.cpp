#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number.";
    cin>>n;
    vector<int>ve;
    while(n>0)
    {
        ve.push_back(n%2);
        n=n/2;
    }
    for(int i=ve.size();i>=0;i--)
    {
        cout<<ve[i];
    }
}