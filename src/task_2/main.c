#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    const int P = 21500;
    double R = 0.0;
    double m = 0.0;

    scanf("%lf", &R);
    
    m = (double)P * (4. / 3.) * M_PI * (R * R * R);
    m = round(m);

    printf("%.0lf", m);

    return 0;
}