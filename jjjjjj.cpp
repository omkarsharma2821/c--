#include <iostream>
#include <string>

using namespace std;

bool is_subsequence(string s, string t) {
  for (char c : s) {
    if (t.find(c) == string::npos) {
      return false;
    }
  }
  return true;
}
    
int main() {
  int num_test_cases;
  cin >> num_test_cases;
  for (int i = 0; i < num_test_cases; i++) {
    string s, t;
    cin >> s >> t;
    if (s == t) {
      cout << "NO" << endl;
    } else if (is_subsequence(s, t)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
