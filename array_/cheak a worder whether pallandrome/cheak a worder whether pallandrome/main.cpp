
//  main.cpp
//  cheak a name whether pallindrome
//
//  Created by Md Habibour Rahman on 25/1/22.


#include <iostream>
using namespace std;

int main( ){
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    
    bool cheek=1;
    
    for (int i=0; i<n; i++) {
        
        if (arr[i] != arr[n-1-i]) {
            cheek=0;
            break;
        }
        
    }
    
    if (cheek==true) {
        cout<<"pallindrome"<<endl;
    } else {
        cout<<"not pallindrome"<<endl;
    }
    
}
