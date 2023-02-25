#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int size){
    cout<<"Inside the function"<<endl; // 1 2 3

    //updating array's first element
    arr[0] = 120;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going Back to main"<<endl; // 1 2 3
}

int main(){

    int num[3] = {1,2,3};

    update(num,3);

    for(int i=0;i<3;i++){
        cout<<num[i];
    }cout<<endl;

}