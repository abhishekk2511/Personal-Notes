#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[100][100];
	int m, n;
	cin >> m >> n;

	//input
	for(int i= 0; i< m;i++){
		for(int j = 0; j< n;j++){
			cin>> a[i][j];
		}
	}

	for(int i = 0; i < m;i++){
		if(i%2 == 0){
			for(int j = 0 ; j < n; j++){
				cout << a[i][j]<< ", ";
			}
		}
		else{
			for(int j = n-1; j >= 0; j--){
				cout << a[i][j] << ", ";
			}
		}
	}
	cout<< "END";

	return 0;
}