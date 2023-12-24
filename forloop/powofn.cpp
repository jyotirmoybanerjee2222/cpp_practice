#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Write The Value of number for which you want to find the power "<<endl;
    cin>>n;
    cout<<"Write how much power you want to find "<<endl;
    int pow;
    cin>>pow;
   int  num = n;
    for(int i =1;i<pow;i++)
    {
        num = num*n;

    }
    cout<<num;
}