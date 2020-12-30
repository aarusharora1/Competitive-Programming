
/*
ID:	suhaspa1
PROB:	****
LANG:	C++11
*/
#include<bits/stdc++.h>
using namespace std;
long long convert(string s, long long base){
    long long len = s.length();
    long long temp = 1;
    long long ans = 0;
    for(long long i=len-1; i>=0; i--){
        ans += ((int)s[i] - '0') * temp; 
        temp *= base;
    }
    return ans;
}
string convert2(long long val){
    string ans = "";
    long long base = 2;
    string converter = "01";
    while(val > 0){
        ans = converter[val%base] + ans;
        val /= base;
    }
    return ans; 
}
int main(){
	//write code here
	//FLIE *fin = fopen (".in", "r");
	//FILE *fout = fopen(".out", "w");
    int n; cin >> n;
    vector<string> a;
    while(n--){
        int base;
        cin >> base;
        long long  s; cin >> s;
        if (base == 2) {a.push_back(to_string(s));}
        else if(base != 10){
            string temp = to_string(s);
            long long ans = convert(temp,base);
            string final1= convert2(ans);
            a.push_back(final1);
        }
        else{
            
         
            string final1 = convert2(s);
            a.push_back(final1);
        }
    }
    for (int i =0 ; i < a.size(); i++) {
        cout << a[i] << "\n";
    }
}
