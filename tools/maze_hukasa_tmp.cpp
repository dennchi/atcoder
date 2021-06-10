#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
int H, W;
int count = 0;
vector<vector<int>> maze;  // 迷路の内容を保存する配列
vector<vector<bool>> seen;  // 既に通った場所なのかを記録しておく配列
P s;
// dfs
int dx[4] = {1, -1, 0, 0};  // dx,dy は次の探索場所への距離を表す（４方向分）
int dy[4] = {0, 0, 1, -1};
void dfs(P p, int count) {
    seen[p.first][p.second] = true;
    for (int i = 0; i < 4; i++) {
        int ny = p.first + dy[i];                              // 次の探索場所の行番号
        int nx = p.second + dx[i];                             // 次の探索場所の列番号
        if (ny < 0 || H <= nx || nx < 0 || W <= ny) continue;  // 迷路の外に出るならスルー
        if (maze[nx][ny] <= count) continue;                     // 障害物があればスルー
        if (seen[nx][ny]) continue;                           //探索済みならスルー
        count += 1;
        dfs(make_pair(nx, ny),count);
    }
}
int main() {
    int y,x;
    cin >> H >> W >> y >> x;
    maze.assign(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> maze[i][j];
        }
    }
    s = make_pair(0,0);
    seen.assign(H, vector<bool>(W, false));
    int count = 0;
    dfs(s,count);
    if (seen[x-1][y-1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    };
    return 0;
}