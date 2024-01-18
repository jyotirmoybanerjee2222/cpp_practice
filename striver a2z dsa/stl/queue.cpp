#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Jyotirmoy");
    q.push("Banerjee");
    q.push("Anisha Banerjee");

    cout<<"size : "<<q.size()<<endl;
    cout<<"First Element : "<<q.front()<<endl;
    q.pop();
    cout<<"First Element : "<<q.front()<<endl;
    cout<<"size : "<<q.size()<<endl;

}
