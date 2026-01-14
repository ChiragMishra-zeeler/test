#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    int count[26] = {0}; // Assuming lowercase letters only

    // Count characters in s
    for (char c : s) {
        count[c - 'a']++;
    }

    // Subtract counts using t
    for (char c : t) {
        count[c - 'a']--;
        if (count[c - 'a'] < 0) return false; // Early exit
    }

    return true;
}

int main() {
    string s1 = "listen", s2 = "silent";
    cout << (isAnagram(s1, s2) ? "True" : "False") << endl;

    string s3 = "rat", s4 = "car";
    cout << (isAnagram(s3, s4) ? "True" : "False") << endl;

    return 0;
}
