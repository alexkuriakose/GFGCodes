
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
    // Get lengths of both strings
    int n1 = a.length();
    int n2 = b.length();
 
    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;
 
    // Sort both the strings
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (a[i] != b[i])
            return false;
 
    return true;
}
 

};


int main() {
    
    int t;
    cout<<"Enter length of the string: ";
    cin >> t;
    cout<<"Enter both the strings : ";
    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
