#include<iostream>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    int j,key;
    for(int i=1;i<=n-1;i++){
        key=arr[i];
        for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
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
    cout<<"Enter Size Of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    Insertion_Sort(arr,n);
    printArray(arr,n);
    return 0;
}