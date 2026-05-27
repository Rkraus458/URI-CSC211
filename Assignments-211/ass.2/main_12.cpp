#include <iostream>
#include <string>

std::string decHex(int dec) {
    std::string hex = "";

    if (dec == 0) {
        hex = "00";
    } else {
        while (dec > 0) {
            int rem = dec % 16;
            
            char hexChar;
            if (rem < 10) {
                hexChar = '0' + rem;
            } else {
                int hexR = rem - 10;
                hexChar = 'A' + hexR;
            }
            dec = dec / 16;
            hex = hexChar + hex;
        }
    }
    if (hex.length() == 1) {
        hex = "0" + hex;
    }
    return hex;
}

int main() {
    int r, g, b;
    std::cin >> r >> g >> b;

    if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255) {
        std::string hexR = decHex(r);
        std::string hexG = decHex(g);
        std::string hexB = decHex(b);

        std::cout << "#" << hexR << hexG << hexB << std::endl;
    } 

    return 0;

}
