#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
 * Complete the 'passort' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING line as parameter.
 */
vector<int> swap( int a, int b, vector<int> arr) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return arr;
} 

int passort(string line) {
    vector<int> nums ;
    for (int i = 0 ; i < line.size() ; i ++) {
        int q = line.at(i);
        if ( (q>=48&&q<=57) || (q>=65&&q<=90) || (q>=97&&q<=122)) {
        nums.push_back(q);}
        
    }
    
    int n = nums.size();
    int min_sorted = 0;
    int max_sorted = n-1;
    int count = 0;
    for (int i = 0 ; i <= n/2 ; i++) {
        
        int min_sorted = 0;
        int max_sorted = n-1;
        vector<int> sorted =nums;
        sort(sorted.begin(),sorted.end());
        if (sorted == nums) {break;}
        for (int m = 0 ; m < n ; m ++) {
            if (sorted[m] == nums[m]) {min_sorted++;}
            else {break;}
        }
        int min = min_sorted;
        for (int m = min_sorted ; m < n ; m++) {
            if (nums[m] < nums[min]) {min=m;}
        }
        count++; if (min == min_sorted) {count--;}
        nums = swap(min,min_sorted, nums);
        cout << "MIN SORT : " << min_sorted << " MIN: " << min << " ";
        for (int q = 0 ; q < n ; q++) {
            char mmm = nums[q];
            cout << mmm  <<  " " ;
        }cout << endl;


        for (int m = n-1; m>=0 ; m --) {
            if (sorted[m] == nums[m]) {max_sorted--;}
            else {break;}
        }
        int max = max_sorted;
        for (int m = max_sorted ; m>= 0 ; m--) {
            if (nums[m] > nums[max]) {max=m;}
        }
        count++; if (max==max_sorted) {count--;}
        nums = swap(max,max_sorted, nums);
        cout << "MAX SORT : " << max_sorted << " MAX: " << max << " ";
        for (int q = 0 ; q < n ; q++) {
            char mmm = nums[q];
            cout << mmm  <<  " " ;
        }cout << endl;
    }
    cout << count << endl;
    return count;

    /**
    vector<char> arr(line.begin(), line.end());
    return selectionSort(arr, line.length());
    **/
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string line;
    getline(cin, line);

    int result = passort(line);

    fout << result << "\n";

    fout.close();

    return 0;
}
