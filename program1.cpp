#include<iostream>
using namespace std;



void turn(int n, string arr[]){
    if(n==0)
        return;
        
    int digit=n%10;
    n=n/10;
    
    turn(n,arr);
    
    cout<<arr[digit]<<" ";
}

int main() {
    string arr[10]={"zero","one","two","three","four","five"};
    int n;
    cin>>n;
    turn(n,arr);

    return 0;
}