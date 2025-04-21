#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int key;
    int n = 5;
    cin>> key;
    int i;

    for(int i = 0;i < n ; i++){
        if(arr[i] == key){
            cout <<"found at index : "<<  i <<endl;
            break;
        }
    }
    if (i == n ){
        cout << "key Not Found";
    }
    
    return 0;
}