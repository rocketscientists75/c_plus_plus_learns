//  asked by amazon & oracle
//  main.cpp
//  first repeating element
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
    
    int const N=1e6+2;
    int idx[N];
    for (int i=0; i<N; i++) {
        idx[i]=-1;
    }
    
    int minidx=INT_MAX;
    
    for (int i=0; i<n; i++) {
        if (idx[arr[i]] !=-1) {
            minidx=min(minidx,idx[arr[i]]);
    }
        else{
            idx[arr[i]]=i;
        }
    }
    
    if (minidx==N) {
        cout<<-1<<endl;
    } else {
        cout<<minidx+1<<endl;
    }
}
