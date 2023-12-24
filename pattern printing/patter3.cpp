#include<iostream>
using namespace std;

int main()
{
    for(int i =0;i<5;i++)
    {
        for(int j=1;j<=5;j++){
            cout<<j<<" ";

        }
        cout<<"\n";
    }

    cout<<"\n"<<"Second Problem";


    for(int i = 0;i<5;i++)
    {
        for(int j = 5;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"patter3"<<endl;

    for(int i = 0;i<= 5;i++)
    {
        for(int j =1;j<=5;j++)
        {
            cout<<j*j<<" ";

        }
        cout<<endl;
    }

    cout<<"patter4"<<endl;
    int row,col;
    char name;

    for( row=1;row<=5;row++)
    {
        name = 'a'+row-1;
        for(col=1;col<=5;col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }




}