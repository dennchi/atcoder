#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// ここでは重みを表す型を long long 型とする
struct Edge {
    int to; // 隣接頂点番号
    long long w; // 重み
    Edge(int to, long long w) : to(to), w(w) {}
};


    
// 各頂点の隣接リストを，辺集合で表す
using Graph = vector<vector<Edge>>;

int BFS(const Graph &G, int s) {
    int N = (int)G.size(); // 頂点数
    int count = 0;
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 s を初期頂点とする)
    dist[s] = 0;
    que.push(s); // s を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v からたどれる頂点をすべて調べる
        for (Edge x : G[v]) {
            // すでに発見済みの頂点は探索しない
            if (dist[x.to] != -1) continue; 

            // 新たな白色頂点 x について距離情報を更新してキューに挿入
            dist[x.to] = dist[v] + 1;
            count += x.w;
            que.push(x.to);
        }
    }
    return count;
}

int main() {
    // 頂点数と辺数
    int N;
    cin >> N;

    // グラフ
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        G[u-1].push_back(Edge(v-1, w));
    }

    long long count_ans = 0;

    for (int i = 0; i < N-1; ++i) {
        int count = BFS(G, i);
        count_ans += count;      
    }

    cout << count_ans <<endl;
}