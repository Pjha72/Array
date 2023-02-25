#include<bits/stdc++.h>
using namespace std;

//HOLD
void printArray(int arr[], int size){
     cout<<"Printing the array : "<<endl;
    //print the array
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" "; // o/p -> 0 0 0 0 0 0 0 0 0 
    }
    cout<<"Printing Done : "<<endl;
}

int main(){
    // declare
    int number[15];

    // Access an Array
    cout<<"value at 0 index : "<<number[0]<<endl; //o/p->0
    cout<<"value at 1 index : "<<number[1]<<endl; //o/p->0
    cout<<"value at 20 index : "<<number[20]<<endl; //o/p->Array Number decalre of size 14

    // Initialization
    int sol[3] = {2,3,4};
    // Access an Array
    cout<<"value at 2 index : "<<sol[2]<<endl; //o/p->4

    int sol2[15] = {2,3};
    int n=3;
    printArray(sol,15);
   /* cout<<"printing the array : "<<endl;
    //print the array
    for(int i=0;i<=n;i++){
        cout<<sol2[i]<<" "; // o/p -> 2 3 0
        //if n=15 then output is 2 3 0 0 0 0 0 0 0 0 0 0 0 0 0
    }*/

    // Intilization all location with 0
    int forth[10] = {0};
    int n=10;
    printArray(forth,10);
    /*cout<<"printing the array : "<<endl;
    //print the array
    for(int i=0;i<=10;i++){
        cout<<forth[i]<<" "; // o/p -> 0 0 0 0 0 0 0 0 0 
    }*/

    // Intilization all location with 1 not possible with below line
    int forth1[10] = {1};
    int n=10;
    printArray(forth1,10);
    /*cout<<"printing the array : "<<endl;
    //print the array
    for(int i=0;i<=10;i++){
        cout<<forth1[i]<<" "; // o/p -> 1 0 0 0 0 0 0 0 0 
    }*/

    // size
    int forth1Size = sizeof(forth1)/sizeof(int);
    cout<<"Size of forth1 is : "<<endl;



    char ch[5] = {'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" "; // o/p -> a b c d e 
    }
    cout<<"Printing Done : "<<endl;

    double first[5];
    float firts[4];
    bool firstBool[7];
    
    cout<<"Everything is fine"<<endl;
}