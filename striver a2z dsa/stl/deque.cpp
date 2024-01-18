#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    cout<<"push element "<<endl;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    cout<<"print first element"<<d.at(1)<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    cout<<"pop element "<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   
    d.push_front(2);
    d.push_front(3);

    cout<<"print first element"<<d.at(0)<<endl;
    cout<<"print front"<<d.front()<<endl;
    cout<<"print back"<<d.back()<<endl;

    cout<<"Empty or not"<<d.empty();

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;





}