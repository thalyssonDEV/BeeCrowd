#include <iostream>
using namespace std;

int main(){
    string mes;
    int x;
    
    cin >> x;
    
    if (x == 1){
        mes = "January";
    }else if (x == 2){
        mes = "February";
    }else if (x == 3){
        mes = "March";
    }else if (x == 4){
        mes = "April";
    }else if (x == 5){
        mes = "May";
    }else if (x == 6){
        mes = "June";
    }else if (x == 7){
        mes = "July";
    }else if (x == 8){
        mes = "August";
    }else if (x == 9){
        mes = "September";
    }else if (x == 10){
        mes = "October";
    }else if (x == 11){
        mes = "November";
    }else if (x == 12){
        mes = "December";
    }
    cout << mes << endl;
    return 0;
}
