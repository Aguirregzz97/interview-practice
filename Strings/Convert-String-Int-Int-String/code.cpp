#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int stringToInt(string s) {
  bool is_negative = false;
  int acum = 0;
  if (s[0] == '-') {
    is_negative = true;
  }
  for (int i = is_negative? 1 : 0; i < s.length(); i++) {
    acum = acum * 10 + s[i] - '0';
  }
  return is_negative ? acum * -1 : acum;
}


string intToString(int num) {
  bool is_negative = false;
  string res = "";
  if (num < 0) {
    is_negative = true;
    num *= -1;
  }
  while (num > 0) {
    res += '0' + num % 10;
    num /= 10;
  }
  if (is_negative) {
    res += '-';
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  string s = intToString(-123);
  cout << s;
}
