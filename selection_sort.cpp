#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        for(int k=0; k<n; k++){
        cout<< arr[k];
        }
        cout<< endl;
    }
    
}