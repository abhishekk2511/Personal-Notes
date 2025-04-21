#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[100];
    int n;
    cout<< "Enter size of the array" <<endl;
    cin >> n;
    
    
    //User Input
    for(int i= 0; i < n; i++){
        cin >> a[i] ;
    }

    // printing array
    for(int i = 0;i < n; i++){
        cout << a[i] << " ";
    }

}