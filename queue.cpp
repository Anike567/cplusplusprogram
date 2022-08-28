#include <iostream>
using namespace std;
class queue{
    int* arr;
    int rear,front;
    int max_size;
    public:
    queue(int default_size=5){
        max_size=default_size;
        rear=-1;
        front=-1;
        arr=new int[default_size];

    }
    bool is_empty(){
        if(rear==front){
            rear=-1;
            front=-1;
            return true;
        }
        else{return false;}
    }
    bool is_full(){
        if(front==max_size){
            
            return true;
        }
        else{return false;}
    }
    void enqueue(int d){
        if(front==-1){
            front=0;
            rear=0;
            arr[front]=d;
            front++;

        }
        else if(is_full()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[front]=d;
            front++;
        }
    }
    void dequeue(){
        if(is_empty()){
            cout<<"queue is empty";
        }
        else{
            cout<<"the deleted element is "<<arr[rear++];
        }

    }
    void print(){
        int tmp=0;
        while(tmp!=max_size){
            cout<<arr[tmp++]<<endl;
        }

    }
};
int main(void){
    queue q;

    int will=1;
    while(will){
        cout<<"enter 1 to add elements in queue"<<endl<<"enter 2 to print the queue"<<endl<<"enter 3 to delete the single element"<<endl;
        cin>>will;
        switch(will){
            case    1:
                cout<<"enter the number";
                int num;
                cin>>num;
                q.enqueue(num);
                break;
            case 2:
                q.print();
                break;
            case 3:
                q.dequeue();

        }
        cout<<"enter 1 if you want to perform more operation else 0"<<endl;
        cin>>will;
    }
    return 0;

}