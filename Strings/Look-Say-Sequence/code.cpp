#include <iostream>
#include <string>

using namespace std;


// 1, 11, 21, 1211, 111221, ...


string getNextSequence(string current) {
  int count = 1;
  string acum = "";
  for (int i = 0; i < current.length(); i++) {
    if (i + 1 == current.length() || current[i] != current[i + 1]) {
      acum += to_string(count) + current[i];
      count = 1;
    }
    else {
      count ++;
    }
  }
  return acum;
}


int getSequenceNumber(int index) {
  if (index == 1) {
    return 1;
  }
  else {
    string res = "1";
    for (int i = 1; i < index; i ++) {
      res = getNextSequence(res);
    }
    return stoi(res);
  }
}

int main() {
  cout << getSequenceNumber(2);
}
