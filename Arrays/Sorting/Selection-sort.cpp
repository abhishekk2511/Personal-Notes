#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n;
    //taking array input from the user
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // printing the array
    cout << "Before Sorting : "; 
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // selection Sort Algorithm
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        swap(a[i] , a[min]);
    }
    
    //printing the sorted array
    cout << "Printing the Sorted Array : ";
    for(int i = 0;i <n;i++){
        cout << a[i] <<" ";
    }

    return 0;
}