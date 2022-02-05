#include<bits/stdc++.h>
using namespace std;

class Solution{
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<int,vector<int>,greater<int>> q;
        vector<int> dis(V,INT_MAX);
        dis[S]= 0;
        q.push(S);
        while(!q.empty()){
            auto node = q.top();
            q.pop();
            int temp = dis[node];
            for(auto& it: adj[node]){
                if(temp+it[1]<dis[it[0]]){
                    dis[it[0]] = temp + it[1];
                    q.push(it[0]);
                }
            }
        }
        return dis;
    }
};
int main()
{
    return 0;
}