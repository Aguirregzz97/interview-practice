#include <iostream>
#include <string>

using namespace std;


// num = 'first row' - 16 * 26 + 'second row' - 16


int getSpreadNum(string s) {
  int res = 0;
  if (s.length() < 2) {
    return (s[0] - '@') * 26;
  }
  res = ((s[0] - '@') * 26) + (s[1] - '@');
  return res;
}


int main() {
  cout << getSpreadNum("A") << endl;
  cout << getSpreadNum("AA") << endl;
  cout << getSpreadNum("ZZ") << endl;
}
