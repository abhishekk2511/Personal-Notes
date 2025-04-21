#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10,20,30,50,15,25};
    int n = 6;
    int max = -1;

    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << "Largest Element is : " << max << endl;
    return 0;
}