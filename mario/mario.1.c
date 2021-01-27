#include <stdio.h>
#include <cs50.h>

int main(void){

    //get positive integer from user
    int p;
    do{
        p = get_int("HEIGHT: ");
    }
    while(p <= 1 || p >= 8);

    // Print out that many hashtag marks


    for(int i = 0; i< p; i++){

        for (int k = p - 1; k > i; k--){
            printf(" ");
        }

        for ( int j = 0; j<= i; j++){
            printf("#");

        }
        printf("\n");


}


}
