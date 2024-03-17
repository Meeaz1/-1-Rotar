#include <stdio.h>

int main () {
int x, d;
printf("Введіть число d = ");
scanf("%d", &d );

    int perv = d / 100 ;
    int dvas = (d / 10) % 10;
    int tris = d % 10;

    printf ("x = %d%d%d", tris, dvas, perv);

    return 0;
}