1#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void add_element_at_end(struct node* p){
    cout<<"enter the number which you want to enter at the end of the link list"<<endl;
    int num;
    cin>>num;

    while(p->next != 0){
        p=p->next;
    }
    struct node* new_node=new node;
    new_node->data=num;
    new_node->next=0;
    p->next=new_node;
}
struct node* add_element_at_begining(struct node* p){
    cout<<"enter the num which you want to enter at the begining";
    int num;
    cin>>num;
    struct node* new_node=new node;
    new_node->data=num;
    if (p==0){
        new_node->next=0;
        
    }
    else{
        new_node->next=p;
    }
    return new_node;

}
struct node* create(){
    cout<<"enter the num";
    int num;
    cin>>num;
    struct node* new_node=new node;
    new_node->data=num;
    cout<<"enter the 1 if you want to enter another number in the list else enter -1";
    cin>>num;
    if(num==-1){
        new_node->next=0;
        
    }
    else {
        new_node->next=create();
    }

    return new_node;
}
void disp(struct node* p){

    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main(void){
    struct node* head=0;

    int will=1;
    while(will){
        cout<<"Enter 1 to create a new link list"<<endl<<"enter 2 to print the list"<<endl<<"Enter 3 to add new element at the end of the list"<<endl<<"enter 4 to add a element at the begining";
        cin>>will;
        switch(will){
            case 1:
                head=create();
                break;
            case 2:
                disp(head);
                break;
            case 3:
                add_element_at_end(head);
                break;
            case 4:
                head=add_element_at_begining(head);
                break;
        }
        cout<<"Enter 1 if you want to perform more operation else enter 0 to exit ";
        cin>>will;
    }
    return 0;

}
