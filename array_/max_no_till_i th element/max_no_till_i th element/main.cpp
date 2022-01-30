//
//  main.cpp
//  max_no_till_i th element
//
//  Created by Md Habibour Rahman on 18/1/22.
//

#include <iostream>
using namespace std;

int main( ){
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int sum=0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            sum+=arr[j];
            
            cout<<sum<<" ";
            
        }
    }
    
}
