#include<iostream>
using namespace std;
int  sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + sum(n-1);

}
int sum1(int n,int s)
{
    if(n==0)
    {
        cout<<s;
    }
    else{
        s=s+n;
        n--;
        sum1(n,s);
    }

}
int main()
{
    cout<<sum(5)<<" ";
    sum1(5,0);
    
}