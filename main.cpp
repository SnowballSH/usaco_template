#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define old_usaco false
#define dfs_enabled false
#define pbds_enabled false

// Policy Based Data Structures
#if pbds_enabled
#include <bits/extc++.h>
using namespace __gnu_pbds;
 
// Red-black tree => O(log n) ordered set
template <typename T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;
#endif

#define get_vec(T, n, name)   \
  vector<T> name(n);          \
  for (int i = 0; i < n; i++) \
    cin >> name[i];

#define all_of(name) name.begin(), name.end()

#define println(val) cout << val << '\n'

#if old_usaco
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
#endif

#if dfs_enabled
const int __SIZE = 1e5 + 10;
vector<int> adj_list[__SIZE];
bool visited[__SIZE];

void dfs(int node)
{
  visited[node] = true;
  for (int u : adj_list[node])
    if (!visited[u])
      dfs(u);
}
#endif

template <typename T>
T last_true(T lo, const T hi, const function<bool(T)> f)
{
  lo--;
  for (T dif = hi - lo; dif > 0; dif >>= 1)
    while (lo + dif <= hi && f(lo + dif))
      lo += dif;
  return lo;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
#if old_usaco
  setIO("name");
#endif

  return 0;
}
