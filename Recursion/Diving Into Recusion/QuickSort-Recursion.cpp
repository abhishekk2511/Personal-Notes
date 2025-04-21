#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int s, int e){
    int i = s - 1;

    for(int j = s; j < e; j++){
        if(a[j] <= a[e]){

            i++;
            swap(a[i], a[j]);

        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;    // this whole partition return index .. jo segment 1 and segment 2 ko seperate kardegi
} 

void QuickSort(int *a, int s, int e){
    //Base Case
    if(s >= e){
        return ;
    }

    //recursive case
    int index = partition(a,s,e);      //partition returned as 6 
    QuickSort(a, s, index-1);           //sort from s to index - 1
    QuickSort(a, index+1, e);           //sort from index+1 to e
}
int main()
{
    int a[] = {2,3,1,4,11,7,8,10,6};
    int n = sizeof(a) / sizeof(int);

    QuickSort(a, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
 return 0;
}