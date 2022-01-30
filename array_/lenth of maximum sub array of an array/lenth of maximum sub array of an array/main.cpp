
//  main.cpp
//  lenth of maximum sub array of an array
//
//  Created by Md Habibour Rahman on 21/1/22.

#include <iostream>
using namespace std;

int main( ){
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        
    }
    
    int pd=arr[1]-arr[0];
    int curr=0;
    int ans=0;
    int j=2;
    

    
    while (j<n) {
        if (pd==arr[j]-arr[j-1]) {
            curr++;
        } else {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        j++;
        ans=max(ans,curr);
    }
    
    cout<<ans<<endl;
    
}
