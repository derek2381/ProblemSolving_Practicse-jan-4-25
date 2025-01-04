// problem link
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/?envType=daily-question&envId=2025-01-04

// source code
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        long long int res = 0;

        map<char, vector<int>> mp;

        for(int i = 0;i < s.length();i++){
            mp[s[i]].push_back(i);
        }

        for(auto i : mp){
            if(i.second.size() >= 2){
                set<char> st;
                int a = i.second[0];
                int b = i.second[i.second.size()-1];
                for(int j = a+1;j < b;j++){
                    st.insert(s[j]);
                }

                res += st.size();
            }
        }

        return res;
    }
};