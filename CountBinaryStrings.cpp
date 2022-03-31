#include<bits/stdc++.h>
using namespace std;

long long countBinaryStrings(long long n)
{
    long long t1 = 1,t2 = 2,sum = 0;

    if(n == 0)
       return 1;

    if(n == 1)
       return 2;

    for(int i = 1; i < n ; i++)
    {
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    return sum;
}

int main()
{
    long long n;

    cout<<"Enter length of the binary string : ";
    cin>>n;
    cout<<"Number of possible binary string without consecutive 1s : "<<countBinaryStrings(n)<<endl;

    return 0;
}
