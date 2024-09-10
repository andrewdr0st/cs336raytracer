#include <iostream>
#include <fstream>
#include <cstdint>

#include "vector.h"

#define X 600
#define Y 400

uint8_t imageData[Y][X][3];

void writeImage() {
    std::ofstream img("img.ppm", std::ios::binary);
    img << "P6\n" << X << " " << Y << "\n255\n";
    img.write(reinterpret_cast<const char*>(imageData), Y * X * 3);
    img.close();
}

int main(int argc, char *argv[]) {

    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            imageData[y][x][0] = x / (float) X * 255.999;
            imageData[y][x][1] = 100;
            imageData[y][x][2] = y / (float) Y * 255.999;
        }
    }

    writeImage();

    return 0;
}


