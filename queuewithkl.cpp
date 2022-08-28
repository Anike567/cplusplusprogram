#include<iostream>
using namespace std;
class node{
    int data ;
    node* next=0;
    node* front=0;
    node* rear=0;
    public:
    node* insert( node* h){
        node* p=h;
        int x;
        cout<<"enter the num";
        cin>>x;

        node* new_node=new node;
        new_node->data=x;
        new_node->next=0;
        if(p==0){
            p=new_node;
            rear=p;
            front=p;
            return p;
        }
        else{
            front->next=new_node;
            front=new_node;
        }
        return h;
    }
    void print (node* p){
        if(is_empty()){
            cout<<"list is empty"<<endl;
        }
        while(p!=0){
            cout<<p->data<<endl;
            p=p->next;
        }
    }
    node* _delete(){
        if(rear==front){
            cout<<"queue is empty"<<endl;
            return rear;
        }
        cout<<rear->data<<"is deleted"<<endl;
        rear=rear->next;
        return rear;
    }
    bool is_empty(){
        if(rear==front){
            return true;
        }
        return false;
    }
};
int main(void){
    node n;
    node* head=0;
    int will=1;
    while(will){
        cout<<"enter 1 to inset more element in queue "<<endl<<" 2 to see the whole element of the queue"<<endl<<"3 to delete the element";
        cin>>will;
        switch(will){
            case 1:
                head=n.insert(head);
                break;
            case 2:
                n.print(head);
                break;
            case 3:
                head=n._delete();
                break;
        }
        cout<<"enter 0 to exit else 1 "<<endl;
        cin>>will;
    }
    return 0;
}