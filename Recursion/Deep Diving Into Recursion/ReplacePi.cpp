#include<bits/stdc++.h>

using namespace std;

void ReplacePi(char *a, int i){
    //Base Case
    if(a[i] == '\0' ){
        return;
    }

    //Recursive     
    if(a[i] == 'p' && a[i+1] == 'i'){
        int j = i + 2;

        //j jab tak null nahi hoga tab tak aage bhadenge and j will pint to last index
        while(a[j] != '\0'){
            j++;
        }

        //then  move the j elemnts to 2 steps ahead, jagah banegi 3.14 ki
        while(j >= i+2){
            a[j+2] = a[j];
            j--;
        }

        //copy the 3.14
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';

        //then ask the recursion to solve the smaller string
        ReplacePi(a, i+4);
    }
    else{
        //then ask the recursion to solve for the smaller string 
        ReplacePi(a, i+1);
    }

}

int main(){
    char a[100] = "axpiaepif";

    ReplacePi(a,0);
    cout << a << endl; 
    return 0;
}