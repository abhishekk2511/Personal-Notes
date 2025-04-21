#include<bits/stdc++.h>

using namespace std;

void GenerateSubArray(int a[], int n){
    for(int i = 0 ; i < n; i++){
        for(int j = i; j < n;j++){
            for(int k = i; k <=j; k++){
                cout <<a[k] <<" ";
            }
            cout <<endl; 
        }
    }
}


void MaximumSumSubArray(int a[], int n){
    int maxSum = INT_MIN;
    for(int i = 0; i< n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j;k++){
                sum += a[k];
            }
            if(maxSum < sum){
                maxSum = sum;
            }
        }
    }
    cout << "Maximum Sum is : " <<maxSum <<endl;
}
int main(){
    int a[] = {1,4,-2,3,9};
    int n = sizeof(a) / sizeof(int);

    GenerateSubArray(a,n);
    MaximumSumSubArray(a,n);
}