#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int main() {
  int t;
  cin >> t;
    while(t--)
	{
		string s;
		cin >> s;
		int b0 = 0, b1 = 0;
		for(auto &it:s)
		{
			b0 += (it == '0');
			b1 += (it == '1');
		}
		int ans = min(b0, b1); 
        vi nums;

		int a0 = 0, a1 = 0;
		for(auto &it:s)
		{
			a0 += (it == '0'), b0 -= (it == '0');
			a1 += (it == '1'), b1 -= (it == '1');
			ans = min(ans, a1 + b0);
			ans = min(ans, a0 + b1);
		}
		cout << ans << endl;
	}
  

  return 0;
}