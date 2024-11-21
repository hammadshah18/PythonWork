#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    int size;
    public:
    Node*top;
    Stack(){
     top=NULL;
        size=0;
    }
   
   void Push(int value){
   Node*newNode=new Node(value);
      if(newNode==NULL){
        cout<<"Stack Overflows"<<endl;
        return;
     
      }else{
        newNode->data=value;
        newNode->next=top;
        top=newNode;
        cout<<"element"<<value<<"Pushed"<<endl;
        size++;   
      }

   }
   
   void Pop(){
    if(top==NULL){
    //   cout<<"Stack is UnderFlow"<<endl;
      return;
    }
    else{
    Node*temp=top;
        cout<<"element"<<top->data<<"is Popped"<<endl;
         top=top->next;
        delete temp;
        size--;
    }
   }
   bool isFull(){
    return size;
   }
   
   bool isEmpty(){
    return top==NULL;
   }
};
int main(){
   Stack s;
   s.Push(4);
   s.Push(334);
   s.Push(79);
   s.Pop();

}