#include <iostream>

int main(){
  int num = 50;
  int f0 = 0, f1 = 1, fn = 0;
  for (int i = 0; i < num; i++){
    std::cout << f0 << " ";
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
  }
return 0;

}