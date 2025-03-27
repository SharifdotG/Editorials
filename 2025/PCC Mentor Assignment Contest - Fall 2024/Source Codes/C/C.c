#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        double r;
        scanf("%lf", &r);

        double PI = 2 * acos(0.0);

        double area_circle = PI * r * r;
        double area_square = 4 * r * r;

        printf("Case %d: %.2lf\n", i, area_square - area_circle);
    }

    return 0;
}