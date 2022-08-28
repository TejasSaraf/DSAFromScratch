#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int temp;
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    do{
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
    }while(i<j);
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void Quick_Sort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
    partitionIndex = partition(arr,low,high);
    Quick_Sort(arr, low, partitionIndex-1);
    Quick_Sort(arr,partitionIndex+1,high);
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
    Quick_Sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}