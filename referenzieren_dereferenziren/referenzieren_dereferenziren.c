#include <stdio.h>

//deklarieren einer Funktion
void inc(int x);
void inc2(int* x);

int main(int argc, char const *argv[])
{
    int y = 0;

    int* z = &y;
    printf("%d \n", y);
    inc(y);
    printf("%d \n", y);

    //& call by reference pointer auf y
    inc2(&y);
    printf("%d \n", y);

    //Pointer wird übergeben 
    inc2(z);
    printf("%d \n", y);

    return 0;
}

//call by value Parameter werden copiert. Eingabe paremeter bleiben unverändert
void inc(int x){
x++;
}

//call by reference Parameter ist Pointer
void inc2(int* x){
(*x)++;
}

