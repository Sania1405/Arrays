#include<iostream>
#include<string>
using namespace std;
int main(){
    int size,i;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int ele;
    cout<<"Enter element whose index u want to find: ";
    cin>>ele;
    for(i=0;i<size;i++){
        if(array[i]==ele){
            cout<<"index: "<<i;
            break;
        }
    }
    cout<<endl;
    if(i==size){
        cout<<"Element is not present in the array!";
    }
}