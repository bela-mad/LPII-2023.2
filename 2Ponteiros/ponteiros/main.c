#include <stdio.h>
#include <stdlib.h>

int main() {

    //exercício 1
    int x = 10, *px = &x, **ppx = &px;
    float y = 5.9, *py = &y, **ppy = &py;

    printf("\nx = %d", x);
    printf("\ny = %.1f", y);
    printf("\n*px = %d", *px);
    printf("\npy = %f", py);
    printf("\n&x = %d", &x);
    printf("\n&ppy = %f", &ppy);
    printf("\n*ppy = %f", *ppy);
    printf("\n**ppy = %f", **ppy);
    printf("\n&ppx = %f", &ppx);
    printf("\n*&px = %f", *&px);

    //exercício 2
    /*int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("\np == &i --> %d", p == &i);
    printf("\n*p - *q --> %d", *p - *q);
    printf("\n**&p --> %d", **&p);
    printf("\n*3 - *p/(*q)+7 --> %d", 3 - *p/(*q)+7);*/

    //exercício 3
    /*int i = 5, *p;
    p = &i;

    printf("%x %d %d %d %d \n", p,*p+2,**&p,3**p,**&p+4);*/

    return 0;
}
