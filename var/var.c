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
    printf("\n");
    printf("f1: %.3f\n", f1);
    
    printf("\n");
    printf("division by int\n");
    printf("height / width: %d\n", height / width);

    printf("\n");
    printf("division by float\n");
    printf("height / width: %.4f\n", height / (float)width);
    return 0;
}

