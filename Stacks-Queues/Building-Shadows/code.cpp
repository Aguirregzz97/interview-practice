#include <iostream>
#include <stack>
#include <vector>

using namespace std;


// 300 600 200 500           (O)   | 600, 500 |

vector<int> getBuildingsWithView(vector<int> buildings) {
  vector<int> result;
  if (buildings.size() == 0) {
    return result;
  }
  stack<int> st;
  st.push(buildings[0]);
  for (int i = 1; i < buildings.size(); i++) {
    if (buildings[i] > st.top()) {
      st.pop();
      while (!st.empty()) {
        if (buildings[i] > st.top()) {
          st.pop();
        } else {
          break;
        }
      }
      st.push(buildings[i]);
    }
    else {
      st.push(buildings[i]);
    }
  }
  while(!st.empty()) {
    result.push_back(st.top());
    st.pop();
  }
}


int main() {
  vector<int> buildings;
  buildings.push_back(800);
  buildings.push_back(100);
  buildings.push_back(80);
  buildings.push_back(500);
  vector<int> results = getBuildingsWithView(buildings);
  for (int i = 0; i < results.size(); i++) {
    cout << results[i] << " ";
  }
}
