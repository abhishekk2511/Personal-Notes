#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5,4,1,2,3};
    int n = sizeof(a)/sizeof(int);


    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    // inbuilt sort
    sort(a , a+n);

    //printing the sorted array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
 return 0;
}