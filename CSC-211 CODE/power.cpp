#include <iostream>

double power(double b, int n){
    // base case
    if (n == 0) {
        return 1;
    }
    // recursive call
    return b * power(b, n-1);
}




int main(){

    double a = power(4,3);



    return 0;
}