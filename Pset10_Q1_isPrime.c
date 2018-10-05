/*
 ============================================================================
 Name        : Pset10_Q1_isPrime.c
 Author      : Zhong Ming Tan
 Version     :
 Copyright   : Zhong Ming Tan @ 2018
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int prime = 1;
    int number[argc - 1];

    for(int k = 0 ; k < argc - 1 ; k++){
        number[k] = atoi(argv[k+1]);
        printf("%i\t",number[k]);
    }
    puts("");

    printf("is prime:");
    for (int i = 0 ;  i < argc - 1 ; i++) {
        prime = 1;
        for(int j = 2 ; j <= number[i] / 2 ; j++){
            if( number[i] % j  == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%i\t",number[i]);
        }
    }
}
