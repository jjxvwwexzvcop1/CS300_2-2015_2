#include <iostream>

using namespace std;

main(){
    int N , E;
    cin >> N >> E;
    int powers[N];
    for(int i = 0 ; i < N ; i++){
        cin >> powers[i];
    }
    int pairs = 0;
    int maxs = -1;
    bool is_max = false;
    for(int i = 0 ; i < N ; i++){
        for(int j = i ; j < N ; j++){
            if(i%2 != j%2){
                if(powers[i] + powers[j] == E){
                        pairs++;
                        if(maxs == j){
                            is_max = false;
                        }else if(maxs < j){
                            maxs = j;
                            is_max = true;
                        }
                }
            }
        }
    }
    cout << pairs << endl;
    if(is_max)
        cout << maxs+1;

}
