#include<iostream>
using namespcae std;
struct node{
    int data ;
    struct node* next;

}

node* head=0;

void insertatbegining(int num){
    struct node* new_node=new node;
    new_node->data=num;
    new_node->next=head;
    head=new_node;

}

int main(void){
    insertatbegining(10);
    while(head!=0){
        cout<<(head->data);
        head=head->next;
    }

}