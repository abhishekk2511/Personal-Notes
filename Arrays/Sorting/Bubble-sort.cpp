#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Printing the Array Before Sorting
    cout << "Before Sorting : ";
    for(int i = 0 ; i < n; i++){
        cout << a[i] << " ";
    }

    cout <<endl;

    // Bubble Sort Algorithm
    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0; j < n- i -1; j++){
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }

    // After Sorting the array
    cout << "After Sorting : ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}