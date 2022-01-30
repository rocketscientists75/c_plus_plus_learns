//record breakers

#include <iostream>
using namespace std;

int main( ){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int ans=0;
    int mx=INT_MIN;
    
    for (int i=0; i<n-1; i++) {
        if (n==1) {
            cout<<"1"<<endl;
        }
        
        if (arr[i]>mx && arr[i]>arr[i+1]) {
            ans++;
            mx=max(mx,arr[i]);
        }
        
    }
    cout<<ans<<endl;

}
