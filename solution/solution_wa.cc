#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int counting(const string& S, const string& sub) {
    int ret = 0;

    for (size_t i = 0; i + sub.size() <= S.size(); i++) {
        if (S.substr(i,sub.size())==sub){
            ret++;
        }
    }
    
    return ret;
}

int main() {
    string S;
    cin >> S;
    if (counting(S,"Sumin")<counting(S,"Minsu")) {
        cout << "Sumin";
    } else {
        cout << "Minsu";
    }
}
