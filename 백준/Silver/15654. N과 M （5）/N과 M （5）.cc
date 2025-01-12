#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 8
using namespace std;

int N, M;
vector<int> list;
bool selected[MAX];
vector<int> res;

void print(){
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n";
}

void DFS(int cnt){
    if(cnt == M){
        print();
        return;
    }
    for(int i=0; i<N; i++){
        if(selected[i]) continue;
        selected[i] = true;
        res.push_back(list[i]);
        DFS(cnt+1);
        res.pop_back();
        selected[i]=false;
    }
}

int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        list.push_back(n);
    }
    sort(list.begin(), list.end());
    DFS(0);

    
    return 0;
}