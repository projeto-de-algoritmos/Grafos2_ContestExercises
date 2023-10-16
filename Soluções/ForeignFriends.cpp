#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, l;
    cin >> n >> m >> k >> l;

    // Armazena a nacionalidade de cada pessoa
    vector<int> nacionalidades(n);
    for (int i = 0; i < n; i++)
        cin >> nacionalidades[i];

    // Armazena os famosos com sua respectiva distância, índice e nacionalidade
    int aux;
    priority_queue<tuple<long long, int, int>> famosos;
    for (int i = 0; i < l; i++) {
        cin >> aux;
        famosos.push({0, aux - 1, nacionalidades[aux - 1]});
    }

    // Armazena cada possível par de amigos e seu custo
    int u, v, c;
    vector<vector<pair<int, long long>> > pares(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> c;
        pares[u].push_back({v, c});
        pares[v].push_back({u, c});
    }

   return 0; 
}
