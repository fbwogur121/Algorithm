#include <iostream>

#define MAX 510
#define endl "\n"
using namespace std;

int N, Answer;
int MAP[MAX][MAX];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

int xdx[4][10] = { { -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 }, { -1, 1, -1, 1, -1, 1, -2, 2, 0, 0 }, { 0, 0, 1, 1, 2, 2, 1, 1, 3, 2}, { 0, 0, -1, -1, -2, -2, -1, -1, -3, -2} };
int ydy[4][10] = { { 0, 0, 1, 1, 2, 2, 1, 1, 3, 2}, { 0, 0, -1, -1, -2, -2, -1, -1, -3, -2}, { -1, 1, -1, 1, -1, 1, -2, 2, 0, 0}, { -1, 1, -1, 1, -1, 1, -2, 2, 0, 0} };
int Percent[9] = { 1, 1, 7, 7, 10, 10, 2, 2, 5 };

void Input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> MAP[i][j];
        }
    }
}

int Change_Dir(int Dir) {
    if (Dir == 0) return 3;
    if (Dir == 1) return 2;
    if (Dir == 2) return 0;
    if (Dir == 3) return 1;
    return -1; 
}


void Spread_Sand(int x, int y, int Dir) {
    int xx = x + dx[Dir];
    int yy = y + dy[Dir];
    if (MAP[xx][yy] == 0)
        return;
    int Sand = MAP[xx][yy];
    int Temp = Sand;
    for (int i = 0; i < 9; i++) {
        int nx = x + xdx[Dir][i];
        int ny = y + ydy[Dir][i];
        int Per = Percent[i];
        int Plus = (Temp * Per) / 100;
        if (nx < 1 || ny < 1 || nx > N || ny > N) Answer += Plus;
        else MAP[nx][ny] += Plus;
        Sand -= Plus;
    }
    int nx = x + xdx[Dir][9];
    int ny = y + ydy[Dir][9];
    if (nx < 1 || ny < 1 || nx > N || ny > N)
        Answer += Sand;
    else MAP[nx][ny] += Sand;
    MAP[xx][yy] = 0;
}

void Solution() {
    int x = (N + 1) / 2;
    int y = (N + 1) / 2;
    int Dir = 1;
    int Move_Cnt = 1;
    while (1) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < Move_Cnt; j++) {
                Spread_Sand(x, y, Dir);
                x += dx[Dir];
                y += dy[Dir];
            }
            Dir = Change_Dir(Dir);
        }
        Move_Cnt++;
        if (Move_Cnt == N) {
            for (int j = 0; j < Move_Cnt; j++) {
                Spread_Sand(x, y, Dir);
                x += dx[Dir];
                y += dy[Dir];
            }
            break;
        }
    }
    cout << Answer << endl;
}

void Solve() {
    Input();
    Solution();
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solve();
    return 0;
}
