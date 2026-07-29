#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f, s, g, u, d;

    cin >> f >> s >> g >> u >> d;

    int dist[f + 1];

    for(int i = 0; i <= f; i++)
    {
        dist[i] = -1;
    }

    queue<int> q;

    q.push(s);
    dist[s] = 0;


    while (!q.empty())
    {
        int floor = q.front();
        q.pop();


        if (floor == g)
        {
            break;
        }


        int upFloor = floor + u;

        if (u > 0 && upFloor <= f && dist[upFloor] == -1)
        {
            dist[upFloor] = dist[floor] + 1;
            q.push(upFloor);
        }


        int downFloor = floor - d;

        if (d > 0 && downFloor >= 1 && dist[downFloor] == -1)
        {
            dist[downFloor] = dist[floor] + 1;
            q.push(downFloor);
        }
    }


    if (dist[g] == -1)
    {
        cout << "use the stairs\n";
    }
    else
    {
        cout << dist[g] << "\n";
    }


    return 0;
}