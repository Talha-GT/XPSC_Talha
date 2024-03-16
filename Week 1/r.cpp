#include <iostream>
#include <set>
using namespace std;

int main() {
    string s, ss;
    ss = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    set<char> st; // Declare set of characters
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]); 
    }
    for (auto val : st) {
        cout << val << " ";
    }
    cout << endl << ss << endl;
    return 0;
}

