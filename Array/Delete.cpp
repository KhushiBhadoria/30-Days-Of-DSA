#include<iostream>
using namespace std;

//Delete element of array from specified index
int* delete_element(int arr[5],int p, int n){
    if (p>n){
        //Check if specified index within the size of array
        return 0;
    }
    else{
        //shift all elements from right to left
        while(p<n){
            arr[p]=arr[p+1];
            p++;
        }
        return arr;
    }

}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    int arr[5]={12,34,56,7,8};
    int n=sizeof(arr)/sizeof(int);//calculate number of elements in an array
    int index=6;
    PrintArray(arr,n);//print array before deletion
    int* arr1= delete_element(arr,index,n);
    if(arr1==0){
        cout<<"Given index is out of range"<<"\n";
    }
    else{
        PrintArray(arr1,n-1);
    }



}
