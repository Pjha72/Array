#include<bits/stdc++.h>
using namespace std;

int UniqueElement(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


int main(){
	int arr[7] = {2,4,3,5,6,7,8};
	int res = UniqueElement(arr,7);
	cout<<res<<endl;
}