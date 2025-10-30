#include <stdio.h>

int main(void) {
    int length, width, height, volume;
    length = 5;
    width = 6;
    height = 7;
    volume = length * width * height;
    printf("length: %d\n", length);
    printf("width: %d\n", width);
    printf("height: %d\n", height);
    printf("volume: %d\n", volume);
 
    float f1 = 2150.48f;
    printf("f1: %.3f\n", f1);
    return 0;
}

