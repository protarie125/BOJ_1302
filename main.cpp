#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
map<string, ll> lst;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < (n--)) {
    string x;
    cin >> x;
    ++lst[x];
  }

  auto ans = lst.begin()->first;
  for (const auto& [k, v] : lst) {
    if (lst[ans] < v) {
      ans = k;
    }
  }
  cout << ans;

  return 0;
}