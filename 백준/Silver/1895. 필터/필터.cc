#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[41][41];
vector<int> res;

int main(){
    int R, C, T;
    cin >> R >> C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> arr[i][j];
        }
    }
    cin >> T;

    for(int i=0; i<R-2; i++){
        for(int j=0; j<C-2; j++){
            vector<int> a;
            for(int k=0; k<3; k++){
                for(int l=0; l<3; l++){
                    a.push_back(arr[i+k][j+l]);
                }
            }
            sort(a.begin(), a.end());
            res.push_back(a[4]);
        }
    }
    int a;
    for(int i=0; i<res.size(); i++){
        if(res[i] >= T){
            a++;
        }
    }
    cout << a;
    
    return 0;
}