#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define old_usaco false
#define dfs_enabled false

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

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
#if old_usaco
  setIO("name");
#endif

  return 0;
}
