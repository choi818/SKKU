#include <stdio.h>
#include <math.h>

int main() {

    float x1 = 0.0;
    float x2 = 3.0;
    float y1 = 0.0;
    float y2 = 4.0;

    float dist; // 거리 변수 선언

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // 거리 변수 연산

    printf("The distance between two pints (%f, 0.00) and (%f, 4.00) is %f\n", x1, x2, dist);    

    return 0;
}
