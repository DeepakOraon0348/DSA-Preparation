//======================= Queue creation ===================
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //create
    queue<int>q;

    //insertion
    q.push(10);

    //size
    cout<<"Size of the queue is: "<<q.size()<<endl;

    //empty
    if(q.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue is not empty!"<<endl;
    }

    //print front element
    cout<<"front element: "<<q.front()<<endl;
    cout<<"last element: "<<q.back()<<endl;

    return 0;
}