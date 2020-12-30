#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;

bool check_prime(int n){
	for(int i = 2; i < min(50000, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		bool lose = (n == 1);
		if(n > 2 && n % 2 == 0){
			if((n & (n - 1)) == 0)
				lose = 1;
			else if(n % 4 != 0 && check_prime(n / 2))
				lose = 1;
		}
		if(!lose)
			cout << "Ashishgup" << endl;
		else cout << "FastestFinger" << endl;
	}
}