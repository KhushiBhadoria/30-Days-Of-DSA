#include<iostream>
using namespace std;
 int search_element(int arr[],int n, int element){
     for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
     }
     return -1;

 }
 int main(){
     int arr[5]={1,2,3,4,5};
     int n=sizeof(arr)/sizeof(int);
     int element=4;
     int return_index=search_element(arr,n,element);

     if (return_index>=0){
        cout<<"Element is at :"<<return_index;
     }
     else{
        cout<<"Element is not in array";
     }


 }
