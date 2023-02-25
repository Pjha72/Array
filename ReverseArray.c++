#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    int start = 0, end  = size - 1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++, end--;
    }
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    int num[6] = {1,2,3,8,9,6};

    reverse(num,6);
    printArray(num,6);
}