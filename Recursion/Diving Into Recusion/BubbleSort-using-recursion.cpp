#include<bits/stdc++.h>
using namespace std;

void print(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout <<endl;
}

void BubbleSort(int *a, int n, int i){
    // base Case
    if(i == n-1){
        return;
    }
    
    //recursive Case
    for(int j = 0; j < n - i -1; j++){
        if(a[j] > a[j + 1]){
            swap(a[j], a[j+1]);
        }
    }

    BubbleSort(a, n, i + 1);
}

int main()
{
    int a[] = {5,4,3,2,1};
    int n = sizeof(a) / sizeof(int);

    print(a,n);
    BubbleSort(a, n, 0);
    print(a,n);
 return 0;
}