#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int *b, int *c, int s , int e){
    int mid = (s+e) /2;

    int i = s;
    int j = mid + 1; 
    int k = s;

    while( i <= mid and j <= e){
        if(b[i] <= c[j]){
            a[k] = b[i];
            i++;
        }
        else{
            a[k] = c[j];
            j++;
        }
        k++;
    }

    while(i <= mid){
        a[k] = b[i];
        i++;
        k++;
    }

    while(j <= e){
        a[k] = c[j];
        j++;
        k++;
    }
}

void mergeSort(int *a, int s, int e){
    
    //Base Case
    if(s >= e){
        return;
    }

    //1. Divide
    int b[100], c[100];
    int mid = (s + e) / 2;

    // for b[]
    for(int i = 0; i <= mid; i++){
        b[i] = a[i];
    }

    //for c[]
    for(int i = mid + 1; i <= e; i++){
        c[i] = a[i];
    }

    //2. Sort
    mergeSort(b, s, mid);
    mergeSort(c, mid + 1, e);

    //3. Merge
    merge(a, b, c, s, e);


}
int main()
{
    int a[] = {4,1,6,2,0,5};
    int n = sizeof(a) /sizeof(int);

    //before Sorting
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(a, 0, n -1 );

    //after sorting
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
 return 0;
}