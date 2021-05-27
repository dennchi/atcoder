#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
vector<int> memo;

void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済ならば探索しない
        dfs(G, next_v); // 再帰的に探索
        memo[v] += memo[next_v] + 1;
    }
}

int main() {
    // 頂点数と辺数
    int N;
    cin >> N;

    // グラフ
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int a;
        cin >> a;
        G[a-1].push_back(i);
    }

    dfs(G,0);
    memo.assign(N, 0);
    for(int i = 0; i < N; ++i){
        cout << memo[i] <<endl;
    }
     
}