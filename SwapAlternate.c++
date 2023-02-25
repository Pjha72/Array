#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size){
    // This code only work for Even length
//	int start = 0, end = start+1;
//	while(start <= size - 1 && end <= size){
//		swap(arr[start], arr[end]);
//		start = start + 2;
//		end = start + 1;
//	}

	for(int i=0;i<size;i+=2){
		if(i+1 < size){
			swap(arr[i],arr[i+1]);
		}
	}
}
void printArray(int arr[], int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main(){
	int arr[7] = {2,4,3,5,6,7,8};
	
	swapAlternate(arr,7);
	printArray(arr,7);
}