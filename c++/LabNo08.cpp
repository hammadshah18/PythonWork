#include <iostream>
using namespace std;
class Node{
    public:
    string data;
    Node* link;
};
int main(){
    cout<<"23CS036\n";
    Node* head;
    Node* one=new Node();
    Node* two=new Node();
    Node* three=new Node();

    one->data="F";
    two->data="D";
    three->data="A";

    one->link=two;
    two->link=three;
    three->link=NULL;

    head=one;
    cout<<"Original List: "<<endl;
    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }

    Node* four=new Node();
    four->data="E";
    head=one;
    two->link=four;
    four->link=three;

    cout<<"List after inserting a node at middle: "<<endl;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->link;
    }

    return 0;
}





