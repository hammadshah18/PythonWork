#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node*next;
};
  
void insbeg(int a,Node*n){
    Node*temp=new Node();
    temp->data=a;
    temp->next=n->next;
    n->next=temp;
    cout<<"element is inserted"<<endl;
}
void traverse(Node*n){
    while (n!=NULL)
    {
        n=n->next;
        cout<<n->data<<endl;
        
    }
    
}
void deleted(Node*n,Node*h){
    Node*temp=h->next;
    h->next=n->next;
    free(n);
    cout<<"element is deleted"<<endl;

}
int main(){
    Node*head=new Node();
    Node*one=new Node();
    Node*two=new Node();
    head->next=one;
    one->data=3;
    one->next=two;
    two->data=7;
    two->next=NULL;


    // traverse(head);
    deleted(one,head);
    traverse(head);

}

