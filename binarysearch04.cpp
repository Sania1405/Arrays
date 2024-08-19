#include<iostream>
#include<string>
using namespace std;
int main(){
    int array[50],n,i,mid,element;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"You entered: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<" Enter element you want to search: ";
    cin>>element;
    int start=0;
    int end=n-1;
    for(i=0;start<=end;i++){
        mid=(start+end)/2;
        if(array[mid]==element){
            cout<<"Element found at index"<<mid<<" ";
            break;
        }else if(array[mid]<element){
            start=mid+1;
        }else if(array[mid]>element){
            end=mid-1;
        }
    }
     if(start>end){
        cout<<"Element not found!";
    }
    return 0;
}