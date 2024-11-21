#include<iostream>
using namespace std;
int main(){
    int n,pos,i;
    int a[100]={2,1,3,4,5};
    cout<<"enter the position :";
    cin>>pos;
    cout<<"enter the element to be inserted:";
    cin>>n;
    for(i=4;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=n;
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
 }
 
 