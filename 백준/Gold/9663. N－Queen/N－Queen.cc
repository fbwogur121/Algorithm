#include <iostream>
#define MAX 15

using namespace std;

int arr[MAX];
int N, res=0;

bool check(int col){
    for(int i=0; i<col; i++){
        if(arr[i]==arr[col] || abs(arr[col]-arr[i])==col-i )
            return false;
    }
    return true;
}

void nqueen(int x){
    if(x==N){
        res++;
    }
    else{
        for(int i=0; i<N; i++){
            arr[x] = i;
            if(check(x)){
                nqueen(x+1);
            }
        }
    }
}

int main(){
    cin >> N;
    nqueen(0);
    cout << res;
    return 0;
}