#include <iostream>
using namespace std;
int n,m,l;
int point[1000];
int target[1000];

void binarySearch(){
    for (int j = 0; j<n; j++) {
        int left = 0;
        int right = l;

    while (left<=right) {
        int mid = (left + right)/ 2;
        int prev = 0 ; int cut = 0 ;
        
        for (int i = 0; i< m; i++) {
            if(point[i] - prev >= mid){
                prev = point[i];
                cut++;
            }
        }

        if( target[j] == cut && l - prev < mid){
         cut = target[j]-1;
        }
        if (cut < target[j] ) {
            right = mid - 1;
        }
        else{
            left = mid + 1 ;
        }
    }
        cout<<right<<"\n" ;
    }
}

int main(){
    cin >> n >> m>>l;   
    for(int i = 0; i < m; i++) 
        cin >> point[i];
    for(int i = 0; i < n; i++) 
        cin >> target[i];
    
    binarySearch();
}