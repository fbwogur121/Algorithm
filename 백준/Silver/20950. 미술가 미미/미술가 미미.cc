#include <iostream>
#include <vector>
#include <limits.h>
 
using namespace std;
 
int n;
vector<vector<int>> vec;
vector<vector<int>> paints;
vector<bool> visited;
vector<int> origin(3);
 
int ans = INT_MAX;
 
void check(int cur)
{
    vector<int> temp = vector<int>{ 0 ,0 ,0 };
 
    for (int i = 0; i < cur; i++)
    {
        temp[0] += vec[i][0];
        temp[1] += vec[i][1];
        temp[2] += vec[i][2];
    }
 
    int gap = 0;
    for (int i = 0; i < 3; i++)
    {
        gap += abs((temp[i] / cur) - origin[i]);
    }
    ans = min(ans, gap);
}
 
void recur(int cur, int start)
{
    if(cur >= 2) check(cur);
    if (cur == 7) return;
    for (int i = start + 1; i < n; i++)
    {
        if (visited[i] == true) continue;
        visited[i] = true;
        vec[cur] = paints[i];
        recur(cur + 1, i);
        visited[i] = false;
    }
}

int main()
{
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        paints.push_back(vector<int>{ a, b, c });
    }
 
    for (int i = 0; i < 3; i++)
    {
        cin >> origin[i];
    }
 
    vec.resize(n);
    visited.resize(n, false);
    recur(0, -1);
    cout << ans;
 
    return 0;
}