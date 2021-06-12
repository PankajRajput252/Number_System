#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=1,rev,sum=0;
    while(n>0)
    {
        rev=n%10;
        sum=sum+(rev*ans);
        ans=ans*2;
        n=n/10;
        
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter number.";
    cin>>n;
    if(n>=2 && n<=9)
    {
        cout<<"Please enter valid binary number.";
    }
    else{
    cout<<binaryToDecimal(n);
    }
}