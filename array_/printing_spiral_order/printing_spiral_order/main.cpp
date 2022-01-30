#include <iostream>
using namespace std;

int main( ){
    int m,n;
    cin>>m>>n;
    
    int arr[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    
    cout<<"the matrix:"<<endl;
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // printing spiral order
    cout<<"spiral order:"<<endl;
    
    int row_strt=0,row_end=m-1,col_strt=0,col_end=n-1;
    
    while (row_strt<=row_end && col_strt<=col_end) {
        
        //for row strt
        for (int col=col_strt; col<=col_end; col++) {
            cout<<arr[row_strt][col]<<" ";
        }
        row_strt++;
        
        //for col end
        for (int row=row_strt; row<=row_end; row++) {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        
        //for row end
        for (int col=col_end; col>=col_strt; col--) {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        
        //for col strt
        for (int row=row_end; row>=row_strt; row--) {
            cout<<arr[row][col_strt]<<" ";
        }
        col_strt++;
        
        
    }
    
    
}

