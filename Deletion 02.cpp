#include<iostream>
#include<string>
using namespace std;
int main(){
    int array[50],i,n,index;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"You entered: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter index of value which u want to delete :";
    cin>>index;
    if(index<1 ||index>=n){
        cout<<"Invalid index!";
        return -1;
    }
    for(i=index;i<n;i++){
        array[i]=array[i+1];
    }
    n--;
    cout<<"New array will be: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}