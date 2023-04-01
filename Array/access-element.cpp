#include<iostream>
using namespace std;

//accessing element from array
int acess(int arr[5],int index){
    //Return value at specified index
    return arr[index];

}

int main(){
//Array Initialization
 int arr[5]={1,23,45,67,89};
 int value,index;
 cout<<"Enter index:";
 cin>>index;
 value=acess(arr,index);
 cout<<"Value at index "<<index<<" is : "<<value;

}

