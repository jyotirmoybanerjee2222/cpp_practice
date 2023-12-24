#include<iostream>
using namespace std;

int main()
{
    cout<<"1st pattern"<<endl;
    cout<<"Enter the value of n";
    int n;
    cin>>n;
    cout<<"first pattern"<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";

    }

    cout<<"second pattern"<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"Third pattern"<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    cout<<"Fourth pattern"<<endl;
    for(int i = 1;i<=n;i++)
    {
        int count = 0;
        for(int j = 1;j<=i;j++)
        {
            
            cout<<i-count<<" ";
            count++;
        }
        cout<<endl;
    }

}

