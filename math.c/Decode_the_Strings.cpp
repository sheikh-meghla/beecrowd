#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        long long m;

        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            v[i]--;
        }

        string s;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, s);

        string ans(n, ' ');
        vector<bool> visited(n, false);

        for (int start = 0; start < n; start++)
        {
            if (visited[start])
            {
                continue;
            }

            vector<int> cycle;

            int cur = start;

            while (!visited[cur])
            {
                visited[cur] = true;
                cycle.push_back(cur);
                cur = v[cur];
            }

            int len = cycle.size();

            int shift = m % len;

            for (int i = 0; i < len; i++)
            {
                int from = cycle[i];

                int to = cycle[(i - shift + len) % len];

                ans[from] = s[to];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}