#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> res;
        vector<int> nope;
        nope.push_back(-1);
        const int N = 1e6+2;
        int check[N] = {0};
        for(int i=0; i<n; i++){

            check[arr[i]]+=1;

        }
        for(int i=0; i<n; i++){

            if(check[i]>1){

                res.push_back(i);
            }
        }
        if(res.empty()){

            return nope;
        }

        return res;
    }

};



int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

