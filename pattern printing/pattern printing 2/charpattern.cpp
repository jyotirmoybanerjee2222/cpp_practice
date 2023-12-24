#include<iostream>
using namespace std;

int main(){
    char a='a';
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            char b = a+i;
            cout<<b<<" ";
        }
        cout<<endl;
    }
}