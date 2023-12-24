#include<iostream>
using namespace std;
int main()
{
    int last = 0;
    int pre = 1;
    int n;
    int current;
    cout<<"Enter the index"<<endl;
    cin>>n;
    for(int i = 2;i<n;i++){
         current = pre+last;
         last = pre;
         pre = current;
    }
    cout<<"fibo series in that index is :"<<current;
   
}