// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data =value;
//         next =NULL;
//     }

// };
// class Stack{
//     public:
//     int size;
//     Node*top;
//     Stack(){
//         top = NULL;
//         size =0;
//     }


// void push(int value){
//     Node*temp= new Node(value);
//     if(temp==NULL){
//         cout<<"stackoverflow "<<endl;
//         return ;
//     }
//     else{
//         temp->next=top;
//         cout<<"pushed into "<<value<<endl;
//         top = temp;
//         size ++;
//     }
// }

// void pop(){
//     if (top==NULL){
//         cout<<"Stack underflow "<<endl;
//         return ;
//     }
//     else{
//         Node*temp =top;
//         cout<<"popped "<<top->data<<" from the stack"<<endl;
//         top=top->next;
//         delete temp;
//        size--;
//     }
// }
// int peek(){
//     if (top==NULL){
//         cout<<"stack is empty"<< endl;
//         return -1;
//     }
//     else {
//         return top->data;
//     }
// }
// bool ISempty(){
//     return top=NULL;

// }
// int ISsize(){
//     return size;

// }};
// int main (){
//     Stack s;
//     s.push(2);
//     s.push(6);
//     s.push(96);
//     s.push(62);
//     s.push(3);
//     s.pop();
// //     cout<<s.ISempty()<<endl;will check stack is empty or not, will give answer in 0 1
// //     cout<<s.ISsize()<<endl; tell size of stack
// //     cout<<s.peek()<<endl; //tell the top element of stack after removed it will automatically show second top element

// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
Node(int value)
{
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
void push(int value){
    Node*temp=new Node(value);
    if(temp==NULL){
        cout<<"stack is overflow "<<endl;
        return;
    }
    else{
        temp->next=top;
        cout<<"pushed "<<value<<" into a stack "<<endl;
        top =temp ;
        size++;}
}
void pop(){
    if(top==NULL){
        cout<<"stack is underflow"<<endl;
        return ;

    }
    else{
    Node*temp=top;
        cout<<"popped "<<top->data<<" from a stack "<<endl;
        top=top->next;
        delete temp;
        size --; }
}
int peek(){
    if(top==NULL){
        cout<<"stack is empty"<<endl;
return -1;
    }
    else {
        return top->data;

    }
}
bool ISempty(){
    return top==NULL;
}
 int ISsize(){
    return size;
 }
    
};
int main(){
    Stack s;
    s.push(2);
    s.push(12);
    s.push(23);
    s.push(25);
    s.push(24);
    s.push(72);
    s.pop();
}











