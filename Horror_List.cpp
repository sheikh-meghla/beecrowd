#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, H, L;
    cin >> N >> H >> L;

    vector<vector<int>> graph(N);
    vector<int> dist(N, INT_MAX);

    queue<int> q;

    for (int i = 0; i < H; i++) {
        int x;
        cin >> x;
        dist[x] = 0;
        q.push(x);
    }

    for (int i = 0; i < L; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (dist[v] == INT_MAX) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    int ans = 0;

    for (int i = 1; i < N; i++) {
        if (dist[i] > dist[ans]) {
            ans = i;
        }
    }

    cout << ans << '\n';

    return 0;
}