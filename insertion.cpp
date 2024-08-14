#include<iostream>
#include<string>
using namespace std;
int main(){
    int array[50],i,n,el,index;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"you entered: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter element which u want to insert: ";
    cin>>el;
    cout<<"Enter index on which you want to insert: ";
    cin>>index;
    for(i=n-1;i>=index;i--){
        array[i+1]=array[i];
    }
    array[index]=el;
    cout<<"New array: ";
    for(i=0;i<=n;i++){
        cout<<array[i]<<" ";
    }
}