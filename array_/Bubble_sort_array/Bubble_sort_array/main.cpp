 //
//  main.cpp
//  Bubble_sort_array
//
//  Created by Md Habibour Rahman on 2/1/22.

#include <iostream>

using namespace std;

int main( ){
    cout<<"total elements:"<<" ";
    int n;
    cin>>n;
    
    cout<<"enter elements to be sorted:"<<" ";
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int counter=1;
    while (counter<n) {
        for (int i=0; i<n-counter; i++) {
            if (arr[i]>arr[i+1]) {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        
        counter++;
    }
    cout<<"& here it is!"<<" ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
}
