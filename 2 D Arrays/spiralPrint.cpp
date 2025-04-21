#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int a[][4], int n, int m){
    
    cout << "Spiral Print of this Array is : ";
    //Initialization
    int sr = 0, sc = 0;
    int er = n - 1 , ec = m - 1  ;

    while(sr <= er and sc <= ec) {

        //1.print sr from sc to ec ,then sr++
        for(int col = sc; col <= ec ; col++){
            cout << a[sr][col]<<" "; 
        }
        sr++;

        // 2. print ec from sr to er, then ec++
        for(int row = sr; row <= er; row++){
            cout << a[row][ec] << " ";
        }
        ec--;

        // 3. print er from ec to er , then er--
        for(int col = ec; col >= sc; col--){
            cout << a[er][col] << " ";
        } 
        er--;

        // 4. print sc from er to sr, then sc++
        for(int row = er; row >= sr; row--){
            cout << a[row][sr]<< " ";
        }
        sr++;

    }
}
int main()
{
   int a[4][4];
    cout << "Enter Rows And Columns : ";
    int n,m;
    cin >> n >> m;
    
    //  user input array
    for(int i = 0 ; i < n;i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j] ;
        }
    }
    
    spiralPrint(a, n ,m);
 return 0;
}