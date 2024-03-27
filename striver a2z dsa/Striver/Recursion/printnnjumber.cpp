#include<iostream>
using namespace std;
void print(int n)
{
   if(n==0)
   {
    return;
   }
   cout<<"JYotirmoy"<<endl;
   n--;
   print(n);
}

int main()
{
    int n;
    cin>>n;
    print(n);
}