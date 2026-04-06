#include<iostream>
using namespace std;
#define MAX 100
class queueimp{
    private:
    int front,rear;
    int queue[MAX]; 
    public:
    queueimp(){
        front=-1;
        rear=-1;
    }
    void enqueue(int value){
        if(rear==MAX-1){
            cout<<"queue is full";
        }
        else{
        if(front==-1){
            front=0;
        }
        queue[++rear]=value;
    }
    }
    int dequeue(){
        if(front==-1){
           cout<<"queue is empty";
           return -1;
        }
        else{
        return queue[front++];
    
        }
    }
    void display(){
        if(front==-1||front>rear){
            cout<<"queue is empty";
            return ;
        }
        else
        for(int i=front;i<=rear;i++){
            cout<<queue[i];
        }
    }
    void isempty(){
        if(front==-1||front>rear){
            cout<<"TRUE";
        }
        else{
            cout<<"FALSE";
        }
    }
};
int main(){
    queueimp qi;
    qi.enqueue(10);
    qi.enqueue(20);
    qi.enqueue(30);
    qi.dequeue();
    qi.display();
qi.isempty();
return 0;
}
