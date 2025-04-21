#include <bits/stdc++.h>
using namespace std;

int FirstOccurance(int *a, int n, int key){

    //base case
    if(n == 0){
        return -1;
    }

    //Recursive Case
    if(a[0] == key){
        return 0;
    }
    int i = FirstOccurance(a+1,n-1,key);

    if(i == -1){
        return -1;
    }

    return i + 1;    
    
    // Since we shifted the array (a + 1), the recursive call does not know about the original array’s indexing.
    //If i (returned from recursion) is not -1, it represents the index in the shifted array.
    //We need to adjust the index to match the original array by addithis is because the short array
}   

// iterator Approach
int FirstOccurancei(int *a, int n, int i, int key){
    // Base Case
    if(i == n){
        return -1;

    }

    //recursive Case
    if(a[i] == key){
        return i;
    }
    return FirstOccurancei(a,n, i+1,key);
}


int LastOccurance1(int *a, int n, int i ,int key){

    //Base Case
    if(i == n){
        return -1;
    }

    //recursive Case
    if(a[i] == key){
        int bi = LastOccurance1(a, n, i + 1, key);
        if(bi != -1){
            return bi;
        }
        else{
            return i;
        }
    }

    int j = LastOccurance1(a,n ,i+1, key);
    return j;
}

int LastOccurance(int *a, int n, int key){
    // Base Case
    if(n == 0){
        return -1;
    }

    // Recurance Relation
    if(a[n-1] == key){
        return n - 1;
    }

    return LastOccurance(a, n-1 ,key);
}

void AllOCcuracne(int *a, int n, int i ,int key){
    
    // Base Case
    if(i == n){
        return;
    }

    //recursive Case
    if(a[i] == key){
        cout << i << " ";
    }

    AllOCcuracne(a, n, i + 1, key);
}


int main(){
    int a[] = {1,1,6,3,4,3,3,7};
    int n = sizeof(a) / sizeof(int);

    FirstOccurance(a,n,3); 
    // cout << FirstOccurance(a,n,3) << endl;
    // cout << FirstOccurancei(a,n,0,3) << endl;
    // cout << LastOccurance(a, n , 3);    
    // cout << LastOccurance1(a, n , 0 , 3);  
    AllOCcuracne(a, n , 0 , 3);  
}