#include<iostream>
using namespace std;
class node {
    public: 
    int data;
    node* left;
    node* right;
    node* insert(){
        int t;
        cout<<"enter the number which you want to enter";
        cin>>t;
        node* newnode=new node;
        newnode->data=t;
        newnode->left=0;
        newnode->right=0;
        cout<<"enter -1 if you want to exit else enter 1 to enter left node int tree or enter 2 to enter right node in tree";
        cin>>t;
        if(t==-1){
            return newnode;
        }
        else if(t==1){
            newnode->left=insert();
        }
        else if(t==2){
            newnode->right=insert();
        }
        else {
            cout<<"invallid input please enter valid one";
            cin>>t;
        }
        return newnode;

    }
    void inorder(node *p){
    if(p!=NULL){
        cout<<p->data;
        inorder(p->left);
        inorder(p->right);
        }

    }
    void postorder(node* p){
     if(p!=NULL){
        cout<<p->data;
        
        postorder(p->right);
        postorder(p->left);

        }   
    
    }
};
int main(void){
    node c;
    node* root=0;
    root=c.insert();
    c.inorder(root);
    c.postorder(root);
    return 0;
}