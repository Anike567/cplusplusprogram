#include<iostream>
using namespace std;
struct node{
    int num;
    struct node *left_node;
    struct node *right_node;
};
void inorder(struct node *p){
    if(p!=NULL){
        cout<<p->num;
        inorder(p->left_node);
        inorder(p->right_node);

    }
}
struct node *create(){
    int x;
    struct  node *new_node=new node;
    cout<<"enter the element which you want to store int tree,if not enter -1 ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    new_node->num=x;
    cout<<"enter left child of"<<x;
    new_node->left_node=create();
    cout<<"enter the right child of"<<x;
    new_node->right_node=create();
    return new_node;
}
int main(void){
    struct node *root;
    root=0;
    root=create();
    inorder(root);
    return 0;
}