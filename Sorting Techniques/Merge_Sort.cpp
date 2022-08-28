#include<iostream>
using namespace std;

void merge(int arr[],int mid,int low,int high){
    int i=low;
    int j=mid+1;
    int B[100];
    int k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++;
            k++;
        }
        else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high){
        B[k]=arr[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=B[i];
    }

}

void Merge_Sort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        Merge_Sort(arr,low,mid);
        Merge_Sort(arr,mid+1,high);
        merge(arr,mid,low,high);
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
    Merge_Sort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}