#include <iostream>
#include "bitmap_image.hpp"

int main(int argc, char *argv[]) {

    std::string file(argv[1]);
    std::string output(argv[2]);

    bitmap_image image(file);
    image.convert_to_grayscale();

    int sum = 0;
    for (int i = 0; i < image.width(); i++) {
        for (int j = 0; j < image.height(); j++) {
            bitmap_image::rgb_t tempPixel = image.get_pixel(i, j);
            sum += tempPixel.red;
        }
    }

    int numPixels = image.width() * image.height();

    int P = sum / numPixels;

    for (int x = 0; x < image.width(); x++) {
        for (int y = 0; y < image.height(); y++) {
            if (image.get_pixel(x, y).red >= P) {
                image.set_pixel(x, y, 255, 255, 255); 
            } else {
                image.set_pixel(x, y, 0, 0, 0); 
            }
        }
    }

    image.save_image(output);
    return 0;
}
