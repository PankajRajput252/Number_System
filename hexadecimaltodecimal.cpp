#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n)
{
    int ans=1,rev,sum=0;
    for(int i=n.size()-1;i>=0;i--){
    if(n[i]>='0' && n[i]<='9')
    {
        sum=sum+(n[i]-'0')*ans; //subtracting '0' is use to convert any number into integer
        ans=ans*16;
        
    }
    if(n[i]>='A' && n[i]<='F')
    {
         sum=sum+(n[i]-'A'+10)*ans; //subtracting 'A'+ 10 is use to give number like A=10,B=11
        ans=ans*16;
    }
    }
    return sum;
}
int main()
{
    string n;
    cout<<"Enter number.";
    cin>>n;
    cout<<hexadecimalToDecimal(n);
    
}