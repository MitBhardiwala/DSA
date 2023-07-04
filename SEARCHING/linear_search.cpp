#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp;

    cout<<"Enter number to be searched :";
    cin>>temp;

    for(int i=0;i<n;i++){
        if(arr[i]==temp){
            cout<<"Number found at index :"<<i<<endl;
            break;
        }
    }

    cout<<"Program has been executed"<<endl;
    return 0;
}
