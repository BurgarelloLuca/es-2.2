#include <iostream>
#include <stdio.h>
int main() {
float base,altezza, area;
    printf( "inserire la base ");
    scanf( "%f", &base );
    printf( "inserire l' altezza ");
    scanf( "%f", &altezza );
    area = (base * altezza) /2;
    printf( "area = %f", area );
}
