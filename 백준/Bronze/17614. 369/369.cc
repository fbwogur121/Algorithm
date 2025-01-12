#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int N, res=0;
    cin >> N;

    for(int i=1; i<=N; i++){
        string a = to_string(i);
        for(char c : a){
            if(c=='3' || c=='6' || c=='9'){
                res++;
            }
        }
    }
    cout << res;
    
    return 0;
}