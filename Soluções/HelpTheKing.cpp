#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
using ll = long long;

vector<ii> adj[100010];

int prim(int u, int n){
    set<int> c;
    c.insert(u);

    priority_queue<ii, vector<ii>, greater<ii>> pq;

    for (const std::pair<int, int>& edge : adj[u]){
        int v = edge.first;
        int w = edge.second;
        pq.push(std::make_pair(w, v));
    }

    ll cost = 0;

    while ((int) c.size() < n){
        int v, w;

        do {
            w = pq.top().first, v = pq.top().second;
            pq.pop();
        } while (c.count(v));

        cost += w;
        c.insert(v);

        for (const std::pair<int, int>& edge : adj[v]) {
            int s = edge.first;
            int p = edge.second;
            pq.push(std::make_pair(p, s));
        }
    }

    return cost;
}

int log2int(ll x){
    int res = 0;

    while (x > 1){
        ++res;
        x >>= 1;
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n >> m;

        for (int u = 1; u <= n; ++u) adj[u].clear();

        while (m--){
            int a, b;
            ll c;
            cin >> a >> b >> c;

            c = log2int(c);
            adj[a].push_back(ii(b, c));
            adj[b].push_back(ii(a, c));
        }

        cout << prim(1, n) + 1 << '\n';
    }

    return 0;
}
