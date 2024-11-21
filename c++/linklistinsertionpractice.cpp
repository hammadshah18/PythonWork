#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
    Node*next;
};
void traverse(Node*n);
int main(){
    Node*head=new Node();
    Node*one= new Node();
    Node*two= new Node();
    Node*three= new Node();
    Node*four= new Node();
     Node*NEW=new Node();
       head->next=one;
       one ->next=two;
        two ->next=three;
         three ->next=four;
          four->next=NULL;
          
          head->data=1;
           one->data=10;
            two->data=5;
             three->data=11;
              four->data=1;
              cout<<"before insertion "<<endl;
               
              traverse(head);
              head->next=NEW;
             NEW->data=9;
             cout<<"after insertion";
              
             traverse(head);
}
void traverse(Node*n){
    while(n!=NULL){
        cout<<n->data<<endl;

        n=n->next;

    }
}



