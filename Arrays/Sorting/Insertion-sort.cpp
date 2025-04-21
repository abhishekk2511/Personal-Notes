#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[100];
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int i , j;

    // Taking Array Input From The User 
    cout <<"Enter Array :";
    for(int  i = 0; i < n; i++){
        cin >> a[i];    
    }

    // Printing array Before Sorting
    cout << "Unsorted Array";
    for(int i = 0 ; i < n; i++){
        cout << a[i] << " ";
    }

    //Insertion Sort Algorithm
    for(i =1; i < n ; i++){
        int pickup = a[i];
        for (j = i-1; j >= 0 and a[j] > pickup; j--){
            a[j+1] = a[j];  
        }
        a[j + 1] = pickup;
    }

    cout << endl;

    // Printing Array After Sorting
    cout << "Sorted Array : " ;
    for(int i = 0 ; i < n; i++){
        cout << a[i] << " ";
    }

}