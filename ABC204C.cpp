#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済ならば探索しない
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // グラフ入力受取 (ここでは有向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
    }

    // 探索
    seen.assign(N, false); // 初期状態では全頂点が未訪問
    long long count = 0;
    for (int v = 0; v < N; ++v) {
        dfs(G, v);
        for (int i = 0; i < N; ++i) {
            if(seen[i]){
                count += 1;
            }
        }
        seen.assign(N,false);
    }
    cout << count <<endl;
    
}