#include<iostream>
using namespace std;

int main(){
    int sum = 1;
    for(int i = 1;i<=5;i++)
    {
        for(int j = 0;j<5;j++)
        {
           cout<<sum<<" ";
           sum++;
        }
        cout<<endl;                    
   }