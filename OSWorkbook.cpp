#include <iostream>
#include <cmath>
using namespace std;

main(){
    int N , k;
    cin >> N >> k ;
    int lesson[N] , page[N] , all = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> lesson[i];
        if(lesson[i] > 0){
            page[i] = (int)(ceil((double)lesson[i]/k));
            all += page[i];
        }
    }
    int result = 0 , perpage , y = 0 ,current = 0;
    for(int i = 0 ; i < all ; i++){
        if(page[y] <= 0){
            y++;
            current = 0;
        }
        if(lesson[y] == 0){
            y++;
            i--;
            continue;
        }
        if(page[y] > 1){
            perpage = k;
        }else if(page[y] == 1){
            if(lesson[y] == k){
                perpage = k;
            }else{
                perpage = lesson[y]%k;
            }
        }
        for(int j = 0 ; j < perpage ; j++){
            if(i == current+j)
                result++;
        }
        current += k;
        page[y] -= 1;
        lesson[y] -= perpage;
    }
    cout << result;

}
