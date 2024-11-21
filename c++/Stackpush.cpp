#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

};
void traverse(Node* n){
     while(n!=NULL){
        cout<<n->value<<endl;
        n=n->next;

    }
    }
void Push(Node* t,Node* n){
    cout<<"Enter Value to Push: ";
    int val;
    cin>>val;
    cout<<endl;
    n->value=val;
     n->next=t->next;
    t->next=n;
    if(t==NULL){
        cout<<"Stack is Empty"<<endl;
    }
    

}
int main(){
   Node* top=new Node();
   Node* One=new Node();
   Node* Two=new Node();
   Node* Three=new Node();
   Node* New=new Node();

   
   top->next=One;
   One->value=10; One->next=Two;
   Two->value=20; Two->next=Three;
   Three->value=30; Three->next=NULL;

   Push(top,New);
   traverse(top);
 
}