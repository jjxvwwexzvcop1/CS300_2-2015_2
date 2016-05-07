#include <iostream>
using namespace std;

main(){
    int value;
    cin >> value ;
    int time[value] , number[value] , temp;
    for(int i = 0 ; i < value ; i++){
        cin >> time[i] >> number[i];
        for(int j = 0 ; j < i ; j++){
            if(time[i] < time[j]){
                temp = time[i];
                time[i] = time[j];
                time[j] = temp;
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }else if(time[i] == time[j]){
                if(number[i] < number[j]){
                    temp = time[i];
                    time[i] = time[j];
                    time[j] = temp;
                    temp = number[i];
                    number[i] = number[j];
                    number[j] = temp;
                }
            }
        }
    }
    for(int i = 0 ; i < value ; i ++){
        string temp1 , temp2;
        if(time[i] < 10){
            temp1 = "000";
        }else if(time[i] < 100){
            temp1 = "00";
        }else if(time[i] < 1000){
            temp1 = "0";
        }
        if(number[i] < 10){
            temp2 = "000";
        }else if(number[i] < 100){
            temp2 = "00";
        }else if(number[i] < 1000){
            temp2 = "0";
        }
        cout << temp1 <<  time[i] << " "<< temp2 << number[i] << endl;
    }

}
