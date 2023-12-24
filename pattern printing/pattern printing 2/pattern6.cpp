#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = n-i+1;j>0;j--)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

    for(int row = 1;row<=5;row++)
    {
        for(int col=1;col<=5-(row-1);col++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

    for(int row = 5;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    for(int row = 1;row<=5;row++)
    {
        for(int col = 1 ;col<=5-row+1;col++)
        {
            cout<<col<<" ";

        }
        cout<<endl;

    }

}