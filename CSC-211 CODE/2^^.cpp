#include <iostream>
//my Code
int main(){
    int n = 2;
    while (int i = 0 <= 16){
        n = n * (n * i);
        std::cout << n << std::endl;
    }


return 0;

}

//rightcode

int main(){
    int exp = 0;
    int value = 0;

    while(exp <= 16){
        if(exp == 0){
            value = 1;
        }
        else{
            value *=2;
        }
        exp++;

        std::cout << value << std::endl;
    }

}