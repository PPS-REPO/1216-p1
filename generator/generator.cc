#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

string random_string_with_pattern(const string& pattern, int maxlen) {
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s = pattern;

    while ((int)s.size() < maxlen && rnd.next(2)) {
        s += charset[rnd.next((int)charset.size())];
    }

    shuffle(s.begin(), s.end());
    s = s.substr(0, rnd.next(1, min(maxlen, (int)s.size())));

    if (s.find("Sumin") == string::npos && s.find("Minsu") == string::npos) {
        int insert_pos = rnd.next(0, (int)s.size());
        s.insert(insert_pos, rnd.next(2) ? "Sumin" : "Minsu");

        if ((int)s.size() > maxlen)
            s = s.substr(0, maxlen);
    }

    return s;
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    const int maxlen = 100;
    string s = random_string_with_pattern(rnd.next(2) ? "Sumin" : "Minsu", maxlen);
    println(s);
}
