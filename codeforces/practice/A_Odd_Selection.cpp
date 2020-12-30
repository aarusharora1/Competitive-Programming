#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
#define endl "\n"

int main() {
  int t;
  cin >> t;
    while(t--)
	{
        int n  , x, q;
	    int odd = 0 ; int even = 0;
    	cin >> n >> x;
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> q;
    		if (q %2==0) {even++;} else {odd++;}
    	}
    	bool flag = 0;
    	for(int i = 1; i <= odd && i <= x; i += 2) //Fix no of odd
    	{
    		int have = even, need = x - i;
    		if(need <= even)
    	        flag = 1;
    	}
    	if(flag)
    	    cout << "Yes" << endl;
    	else
    	    cout << "No" << endl;
	}
  

  return 0;
}