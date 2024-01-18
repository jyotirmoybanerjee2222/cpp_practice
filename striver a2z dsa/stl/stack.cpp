#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<string> s;
  s.push("Jyotirmoy");
  s.push("Banerjee");
  s.push("Anisha Banerjee");

  cout<<"top element : "<<s.top()<<endl;
  cout<<"size : "<<s.size()<<endl;
  s.pop();
  cout<<"top element : "<<s.top()<<endl;
  cout<<"size : "<<s.size()<<endl;
  cout<<"Empty or not :"<<s.empty()<<endl;



}