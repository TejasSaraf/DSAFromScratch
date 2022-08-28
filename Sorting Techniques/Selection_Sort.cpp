#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int n){
    int indexOfMin,temp;
    for(int i=0;i<n-1;i++){
        indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    Selection_Sort(arr,n);
    printArray(arr,n);
    return 0;

}