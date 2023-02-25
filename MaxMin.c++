#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        // if(arr[i] < min){
        //     min = arr[i];
        // }
        mini = min(mini, arr[i]);
    }
    return mini;
}
int getMax(int arr[], int size){
    int maxi = INT_MIN;

    // 1st way
    for(int i=0;i<size;i++){
        // if(arr[i] > max){
        //     max = arr[i];
        // }

        //2nd way
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main(){

    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<getMax(num,size)<<endl;
    cout<<getMin(num,size)<<endl;
}