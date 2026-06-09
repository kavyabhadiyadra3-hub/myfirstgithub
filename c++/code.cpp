#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    int n = s.size();
    if(k > n){
        cout << "impossible";
        return 0;
    }

    unordered_set<char> st;

    for(char c : s){
        st.insert(c);
    }

    cout << max(0, k - (int)st.size());

    return 0;
}