#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> V;
    vector<int> a(5,1);//a ->size 1->value
    cout<<"printing a";
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);//cop a->last
    cout<<"printing last";
    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    cout<<"capacity->"<<V.capacity()<<endl; 



    V.push_back(1);
    cout<<"Capacity->"<<V.capacity()<<endl;
    V.push_back(2); 
    cout<<"Capacity->"<<V.capacity()<<endl;
    V.push_back(3); 
    cout<<"Caapacity->"<<V.capacity()<<endl;
    cout<<"Size->"<<V.size()<<endl;

    cout<<"Element at 2nd Index"<<V.at(2)<<endl;
    cout<<"front"<<V.front()<<endl;
    cout<<"back"<<V.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i :V)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    V.pop_back();
    cout<<"before pop"<<endl;
    for(int i:V)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size->"<<V.size()<<endl;
    V.clear();
    cout<<"After clear size->"<<V.size()<<endl;
    cout<<"After clear capcity->"<<V.capacity()<<endl;

    }