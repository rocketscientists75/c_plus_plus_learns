//
//  main.cpp
//  maximum word length of a sentence
//
//  Created by Md Habibour Rahman on 25/1/22.
//

#include <iostream>
using namespace std;

int main( ){
    
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    
    cin.getline(arr, n);
    cin.ignore();
    
    int i=0;
    int currLen=0;
    int maxLen=0;
    
    while (1) {
        if (arr[i]==' ' || arr[i]=='\0') {
            if (currLen > maxLen) {
                maxLen=currLen;
            }
            
            currLen=0;
        }
        
        else
            currLen++;
        
        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<arr<<endl;
    cout<<maxLen<<endl;
    
}
