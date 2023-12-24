#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,sum1=0;
    cout<<"Enter the number:";
    cin>>n;

    for(i = 0;i<=n;i++)
    {
        sum = sum+i;
        sum1 = sum1+i*i;
    }
    cout<<sum<<endl;
    cout<<sum1<<endl;
    int num ;
    cout<<"Enter the number";
    cin>>num;
    sum = (num*(num + 1))/2;
    cout<<sum;

}