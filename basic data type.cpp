#include <iostream>
#include <cstdio>

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read input values
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Print each value on a new line
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
