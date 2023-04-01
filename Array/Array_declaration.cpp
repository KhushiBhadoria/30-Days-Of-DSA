/*What is array?
Array is a linear data structure. It is a collection of Homogeneous elements stored at contiguous memory location.
*/
#include<iostream>
using namespace std;
#Print array
void printArray(int arr[5]){
     for(int i=0;i<5;i++){
        cout<<"arr["<<i<<"]"<<arr[i]<<"\n";
     }

}

int main(){
//Array Initialization
 int arr[5]={1,23,45,67,89};
 printArray(arr);

}



