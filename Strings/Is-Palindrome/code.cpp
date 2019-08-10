#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
  for (int i = 0, j = s.length() - 1; i < s.length() / 2; i ++, j --) {
    if (s[i] != s[j]) {
      return false;
    }
  }
  return true;
}


int main() {
  if (isPalindrome("anitalavalatina")) {
    cout << "YES";
  } else {
    cout << "NO :(";
  }
  return 0;
}
