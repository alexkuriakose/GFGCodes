//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        if(S.size() == 0) return S;
            stack<string> st;
            string res;
            for(int i = 0; i < S.size(); i++){
                string word;
                if(S[i] =='.') continue;
                while(i < S.size() && S[i] != '.'){
                    word += S[i];
                    i++;
                }
                st.push(word);
            }
            while(!st.empty()){
                res += st.top();
                st.pop();
                if(!st.empty()) res += ".";
            }
            return res;
    } 
    
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
