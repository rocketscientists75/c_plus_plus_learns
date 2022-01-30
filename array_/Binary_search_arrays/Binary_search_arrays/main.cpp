#include <iostream>
using namespace std;

int binarySearch(int arr[ ],int n,int key){
    int s=0;
    int e=n;
    while (s<=e) {
        
        int mid=(s+e)/2;
        
        if (arr[mid]==key) {
            return key;
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1   ;
}

int main( ){
    int n;
    cout<<"Enter your array size:"<<" ";
    cin>>n;
    int arr[n];
    
    cout<<"elements:"<<" ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"what are you searching for?"<<" ";
    cin>>key;
    cout<<" here it is:"<<" ";
    cout<<binarySearch(arr, n, key)<<endl;
}
