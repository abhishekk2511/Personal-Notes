#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *a, int s, int e, int key){
    
    //Base case
    if(s > e){
        return -1;
    }

    // Recursive Case
    int mid = (s + e) / 2;
    if(a[mid] == key){
        return mid;
    }

    else if(key > a[mid]){
        return BinarySearch(a, mid + 1, e, key);
    }

    else {
        return BinarySearch(a, s, mid - 1, key);
    }
}
int main()
{
    int a[] = {1,4,7,8,10,12};
    int n = sizeof(a) / sizeof(int);

    cout << BinarySearch(a,0, n -1, 10);
    return 0;
}