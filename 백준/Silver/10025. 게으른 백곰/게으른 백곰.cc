#include <iostream>
#include <vector>
 
using namespace std;
 
int n, k;
int g, x;
 
int bucket[1000001];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    cin >> n >> k;
 
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        bucket[b] = a;
    }
 
    k = 2 * k + 1;
    
    int ans = 0;
 
    int s = 0;
    for (int i = 0; i < 1000001; i++)
    {
        if (i >= k) s -= bucket[i - k];
        s += bucket[i];
        ans = max(ans, s);
    }
    
    cout << ans;
 
    return 0;
}