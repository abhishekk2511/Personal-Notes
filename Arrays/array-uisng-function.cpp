#include<bits/stdc++.h>
using namespace std;

void  print (int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";        
    }
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    int n  = sizeof(a) / sizeof(int);

    cout << n;
    cout <<endl;
    
    print(a,n); //calling the function
}