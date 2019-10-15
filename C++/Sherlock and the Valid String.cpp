#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
//string isValid(string s) {
string isValid(string s) {
    int f[26]={0};
    int count=0;
    int m;
    for(int i=0;i<s.length();++i){
        f[s[i]-'a']++;
    }
    m=f[0];
    for(int i=0;i<26;++i){
        if(f[i]!=m && f[i]!=0){
            count++;
        }
    }
    if(count>1){return "NO";}
    else{return "YES";}
           
 }



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
