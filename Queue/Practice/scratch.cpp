#include<iostream>
using namespace std;
class queue{
    public:
       int *arr;
       int size;
       int front;
       int rear;

       queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
       }
       void push(int val){
        //check full
        if(rear==size-1){
            cout<<"Queue Overflow!"<<endl;
            return;
        }
        else if(front==-1 && rear==-1){
            //empty case
            front++;
            rear++;
            arr[rear]=val;
        }
        else{
            //nomal case
            rear++;
            arr[rear]=val;
        }
       }
       void pop(){
        //underflow
        if(front==-1 && rear==-1){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else if(front==rear){
            //empty case->single element
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            //normal case
            arr[front]=-1;
            front++;
        }
       }
       int getSize(){
        return rear-front+1;
       }
       int getFront(){
        if(front==-1){
            cout<<"No element in queue, cannot give front element"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
       }
       void print(){
        cout<<"printing Queue!"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       }
};
int main(){
      queue q(5);
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);

      q.print();
      cout<< q.getSize()<<endl;
      q.getFront();
      q.pop();
      q.print();
}