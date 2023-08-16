#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t){
        int i=0, j=0;
        while(i<t.size()){
            if(s[j]==t[i]){
                j++;
                i++;
            }
            else{
                i++;
            }
        }
        if(j==s.size()){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
};

int main() {
    Solution solution;
    string s, t;
    s = "abc";
    t = "ahbgdc";
    solution.isSubsequence(s,t);
}
