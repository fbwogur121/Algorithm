#include <iostream>

using namespace std;
int N, M;
bool chk[205][205];
int res = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;

    for(int i=0; i<M; i++){
        int p, q;
        cin >> p >> q;
        chk[p][q] = chk[q][p] = true;
    }
    
    for(int i=1; i<=N-2; i++){
        for(int j=i+1; j<=N-1; j++){
            if(chk[i][j]) continue;
            for(int k=j+1; k<=N; k++){
                if(chk[i][k] || chk[j][k]) continue;
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}