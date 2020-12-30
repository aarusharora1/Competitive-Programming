#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the "syllables" function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING word as parameter.
 */

int syllables(string word) {
    vector<string> vowels =  {"a", "e", "i", "o", "u"};
    vector<string> prefix = {"co", "de", "dis", "pre", "re", "un"};
    vector<string> suffix =  {"age", "ful", "ing", "less", "ment"};
    vector<string> doubles =  {"ch", "ck", "ph", "sh", "th", "wh", "wr"};
    int ans;
    int n = word.size();
    if (word.size() > 2) {
        for (int i = 0 ; i< prefix.size(); i++ ) {
            if (word.substr(0,2)==prefix[i]) {ans+=2;}
        }
    }
    if (word.size() > 3) {
        for (int i = 0 ; i < prefix.size() ; i++) {
            if (word.substr(0,3) == prefix[i]) {ans+=3;}
        }
        for (int i = 0 ; i < suffix.size() ; i++) {
            if (word.substr(n-4,n) == suffix[i]) {ans+=n-4;}
        }
    }
    if (word.size() > 4) {
        for (int i = 0 ; i < suffix.size(); i++) {
            if (word.substr(n-5,n)==suffix[i]) {ans+=n-5;}
        }
    }
    for (int i = 1 ; i< n-1; i++) {
        if (find(vowels.begin(),vowels.end(),word[i-1]) != vowels.end() &&
        find(vowels.begin(),vowels.end(),word[i+1]) != vowels.end()) {
            ans += i-1;
        }
    }
    for (int i = 1 ; i< n-2; i++) {
        if (find(vowels.begin(),vowels.end(),word[i-1]) != vowels.end() &&
        find(vowels.begin(),vowels.end(),word[i+2]) != vowels.end() &&
        find(doubles.begin(),doubles.end(),word.substr(i,i+2)) != doubles.end()) {
            ans += i-1;
        }
    }
    for (int i = 0 ; i < n-1; i++) {
        string t = word.substr(i,i+1);
        if (find(doubles.begin(),doubles.end(),t) != doubles.end() && 
        (find(vowels.begin(),vowels.end(),word[i]) == vowels.end() && 
        (find(vowels.begin(),vowels.end(),word[i+1]) == vowels.end())) {
            ans+= i;
        }
    }
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string word;
    getline(cin, word);

    int result = syllables(word);

    fout << result << "\n";

    fout.close();

    return 0;
}
