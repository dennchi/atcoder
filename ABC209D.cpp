v#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

// 入力: グラフ G と，探索の始点 s
// 出力: s から各頂点への最短路長を表す配列
vector<int> BFS(const Graph &G, int s, int t) {
    int N = (int)G.size(); // 頂点数
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
        for (int x : G[v]) {
            // すでに発見済みの頂点は探索しない
            if (dist[x] != -1) continue; 

            // 新たな白色頂点 x について距離情報を更新してキューに挿入
            dist[x] = dist[v] + 1;
            que.push(x);
            if (x == t){
                return dist;
            }
        }
    }
}

int main() {
    // 頂点数と辺数
    int N, Q;
    cin >> N >> Q;

    // グラフ
    Graph G(N);
    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    for (int i = 0; i < Q; ++i) {
        int c, d;
        cin >> c >> d;
        // 頂点 0 を始点とした BFS
        vector<int> dist = BFS(G, c-1, d-1);

        //結果出力 (各頂点の頂点 0 からの距離を見る)
        if (dist[d-1] % 2 == 0){
            cout << "Town" <<endl;
        }else{
            cout << "Road" <<endl;
        }

    }

    

}