#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K, L;
    int U, V, tam;
    long long C;
    cin >> N >> M >> K >> L;

    vector<int> nacionalidades(N); 
    vector<vector<pair<int, long long>> > pares(N); 

    vector<int> famosos(N, 0); 
    vector<long long> custoMinimo(N, LLONG_MAX); 
    vector<int> amigosFamosos(N); 
    vector<long long> custoTotal(N, LLONG_MAX); 

    // fila de prioridade para operações de amizade
    priority_queue<tuple<long long, int, int>> amigos; 
    tuple<long long, int, int> amigo; 

    for (int i = 0; i < N; ++i)
        cin >> nacionalidades[i];

    for (int i = 0; i < L; ++i) {
        cin >> U;
        amigos.push({0LL, U - 1, nacionalidades[U - 1]});
    }

    for (int i = 0; i < M; ++i) {
        cin >> U >> V >> C;
        pares[U - 1].push_back({V - 1, C}); 
        pares[V - 1].push_back({U - 1, C});
    }

    // dijkstra para determinar custos de amizade
    while (!amigos.empty()) {
        amigo = amigos.top();
        amigos.pop();
        C = get<0>(amigo);
        U = get<1>(amigo);
        V = get<2>(amigo);

        // verifica se é possível fazer amizade e calcula os custos
        if ((famosos[U] >= 0) && (famosos[U] != V)) {
            if (famosos[U] == 0) {
                custoMinimo[U] = -C;
                amigosFamosos[U] = V;
                famosos[U] = V;
            } else {
                custoTotal[U] = -C;
                famosos[U] = -1;
            }

            tam = pares[U].size();
            for (int i = 0; i < tam; ++i)
                amigos.push({C - pares[U][i].second, pares[U][i].first, V});
        }
    }

    for (int i = 0; i < N; ++i) {
        if (custoMinimo[i] == LLONG_MAX)
            custoMinimo[i] = -1;
        if (custoTotal[i] == LLONG_MAX)
            custoTotal[i] = -1;

        if (nacionalidades[i] != amigosFamosos[i])
            cout << custoMinimo[i];
        else
            cout << custoTotal[i];

        if (i < (N - 1))
            cout << " ";
        else
            cout << endl;
    }
    return 0;
}
