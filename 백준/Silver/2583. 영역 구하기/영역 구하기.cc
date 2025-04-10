#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int paper[100][100];
int N,M,K;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
queue<pair<int,int>>q;
int bfs(){
    int cnt=0;
    while(!q.empty()){
        int x=q.front().second;
        int y=q.front().first;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0||ny<0||nx>=N||ny>=M)continue;
            if(!paper[ny][nx]){
                cnt++;
                paper[ny][nx]=1;
                q.push({ny,nx});
            }
        }  
    }
    return cnt;
}
int main(){
    int x1,x2,y1,y2,cnt=0,area[100];
    cin>>M>>N>>K;
    while(K--){
        cin>>x1>>y1>>x2>>y2;
        for(int i=y1;i<y2;i++)
            for(int j=x1;j<x2;j++)
                paper[i][j]=1;
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(!paper[i][j]){
                q.push({i,j});
                area[cnt++]=bfs();
                if(!area[cnt-1])area[cnt-1]=1;
            }
        }
    }
    sort(area,area+cnt);
    cout<<cnt<<"\n";
    for(int i=0;i<cnt;i++)cout<<area[i]<<" ";
}