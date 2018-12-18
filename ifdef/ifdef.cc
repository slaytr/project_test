#include <stdio.h>
#include <iostream>

//#define APPLES

#ifdef APPLES
int main(){
    printf("APPLES");
    return 0;
}
#endif

#ifndef APPLES
int main(){
    printf("NO APPLES");
    return 0;
}
#endif