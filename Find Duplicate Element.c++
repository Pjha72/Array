#include<bits/stdc++.h>
using namespace std;

int DuplicateElement(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    for(int i=0;i<size;i++){
        ans = ans ^ i;
    }
    return ans;
}


int main(){
	int arr[7] = {2,4,3,5,6,7,8};
	int res = DuplicateElement(arr,7);
	cout<<res<<endl;
}