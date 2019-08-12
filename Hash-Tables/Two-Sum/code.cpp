#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


// 1, -1, 2    | -1, 2  |

vector<vector<int>> getPairs(vector<int> arr) {
  vector<vector<int>> results;
  unordered_set<int> set;
  // insert arr in hash table
  for (int i = 0; i < arr.size(); i++) {
    set.insert(arr[i]);
  }

  // check for pairs
  for (int i = 0; i < arr.size(); i++) {
    // found counterpart
    if ((set.find(arr[i] * -1)) != set.end()) {
      vector<int> pair;
      pair.push_back(arr[i]);
      pair.push_back((arr[i] * -1));
      set.erase(arr[i]);
      results.push_back(pair);
    }
  }
  return results;
}


int main() {
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(-1);
  vec.push_back(-2);
  vec.push_back(-3);
  vec.push_back(4);
  vec.push_back(-4);
  vector<vector<int>> results;
  results = getPairs(vec);
  for (int i = 0; i < results.size(); i++) {
    cout << results[i][0] << ", " << results[i][1] << endl;
  }
}
