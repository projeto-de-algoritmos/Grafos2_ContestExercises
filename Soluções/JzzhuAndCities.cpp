#include <bits/stdc++.h>
using namespace std; 

const int MAX = 3e5; 
const long long inf = 9000000000000000000LL; 

long long distancia[MAX];
vector<vector<int>> adj[MAX];
bool rotasDeTrem[MAX];  

void dijkstra(int inicio, int n){
    for(int i = 1; i <= n; i++)
        distancia[i] = inf; 
    distancia[inicio] = 0; 

    //declaracao do heap
    priority_queue< pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>> > heap;
    heap.push({0, inicio}); 

    while(!heap.empty()){
        int noAtual = heap.top().second; 
        int distanciaAtual = heap.top().first; 
        heap.pop(); 

        if(distancia[noAtual] < distanciaAtual)
            continue; 
        
        for(auto e : adj[noAtual]){
            int v = e[0]; 
            long long x = e[1]; 
            int tipo = e[2]; 

            if(distanciaAtual + x < distancia[v]){
                distancia[v] = distanciaAtual + x; 
                rotasDeTrem[v] = tipo; 
                heap.push({distancia[v], v}); 
            } else if(distanciaAtual + x == distancia[v] && rotasDeTrem[v] == 1 && tipo == 0){
                rotasDeTrem[v] = 0; 
            }
        }
    }
}

int main(){
    int n, m, k; 
    cin >> n >> m >> k; 

    //estradas
    for(int i = 1; i <= m; i++){
        int u, v, x; 
        cin >> u >> v >> x; 
        adj[u].push_back({v, x, 0}); 
        adj[v].push_back({u, x, 0});
    }

    //rotas de trem
    for(int i = 1; i <= k; i++){
        int s, y; 
        cin >> s >> y; 
        adj[1].push_back({s, y, 1}); 
        adj[s].push_back({1, y, 1}); 
    }

    dijkstra(1, n); 

    int rotasNecessarias = 0;
    for(int i = 1; i <= n; i++) {
        rotasNecessarias += rotasDeTrem[i]; 
    } 

    cout << k - rotasNecessarias << endl;

    return 0; 
}