// #include<iostream>
// using namespace std;
// int main(){  int i,j,n;
// cout<<"enter the size of array:";
// cin>>n;
// int a[1000];
// cout<<"enter the element of array:";
// for(i=0;i<n;i++){
//     cin>>a[i];
// }
// for(i=n-2;i>=0;i--){
//      bool swapped =0;
// for(j=0;j<=i;j++){
//     if(a[j]>a[j+1]){
//         swapped=1;
//     swap(a[j],a[j+1]);
//     }
// }
// if(swapped==0){
//     break;
// }
// }
// for(i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }}
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the size of Array:";
    cin>>n;
 int   a[1000];
    cout<<"enter the element of array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(a[j]>a[j+1]){
               // a[i]=a[j];
                swap(a[j],a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}