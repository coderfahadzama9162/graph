#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, m;

    cin >> m >> n;
   vector <vector<int>> adj;

    for (int i = 0; i <= n;i++){
        adj[i].push_back({});
    }
        // assuming this as a  one based indexing

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> v >> u;

            // u->v and v->u

            adj[u].push_back(v);
            adj[v].push_back(u);

          
        }

        for (int i = 1; i <= n;i++){
            for (int  j= 0; j < adj[i].size();j++){
                cout << adj[i][j] << "->" << adj[j][i] << endl;
            }
        }
}
