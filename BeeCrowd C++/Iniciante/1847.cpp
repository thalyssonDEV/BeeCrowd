#include <iostream>
using namespace std;

string verificar_figura(int A,int B, int C){
    if (B < A and C >= B){
        return ":)";
    }else if (B > A and C <= B){
        return ":(";
    }
    else if ((B > A and C > B) and (abs(B-C) < abs(A-B))){
        return ":(";
    }
    else if (B > A and C > B and (abs(B-C) >= abs(A-B))){
        return ":)";
    }
    else if (B < A and C < B and (abs(B-C) < abs(A-B))){
        return ":)";
    }
    else if ((B < A and C < B) and (abs(B-C) >= abs(A-B))){
        return ":(";
    }
    else if (A == B){
        if (C>B){
            return ":)";
        }else{
            return ":(";
        }
    }
    return 0;
}

int main(){
    int A,B,C;
    
    cin >> A >> B >> C;
    
    cout << verificar_figura(A,B,C) << endl;
    return 0;
}
