#include<iostream>
using namespace std;

int* insert_element(int arr[],int n,int element,int current_size){
    if(current_size==n){
            return 0;
        }
    else{
        arr[current_size]=element;
        return arr;
    }


}
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<arr[i]<<"\n";
     }

}

int main(){
    int arr[10]={12,34,56,78,90};
    int n= sizeof(arr)/sizeof(int);
    int current_size=5;
    int element=45;
    int* new_arr=insert_element(arr,n,element,current_size);
    if(new_arr==0){
        cout<<"Element could not be inserted";
    }
    else{
        printArray(new_arr,current_size+1);
    }
}
