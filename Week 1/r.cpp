#include <iostream>
#include <set>
using namespace std;

int main() {
    string s, ss;
    ss = "abcdefghijklmnopqrstuvwxyz"; // Initialize ss as a string
    cin >> s;
    set<char> st; // Declare set of characters
    for (int i = 0; i < s.size(); i++) {
        st.insert(s[i]); // Use insert instead of push for sets
    }
    for (auto val : st) {
        cout << val << " ";
    }
    cout << endl << ss << endl; // Print ss on a new line
    return 0;
}

