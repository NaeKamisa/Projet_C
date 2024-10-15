#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int coin;
    int result ;
    int joueur = 3;
    int win = 0;
    int lose = 0;


    printf("######## Pile ou Face ##########\n\n");
    while(joueur != 0 ) {
        printf(" Pile ou Face ?\n 1. Pile\n 2. Face\n 0. Quitter\n");

        coin = rand();
        char buf[255];
        memset(buf,0,255);
        fgets(buf,255,stdin);
        joueur = atoi(buf);
        if(joueur == 1){
            printf("Vous avez choisie Pile\n");
            printf("la pièce est lancé...\n\n");

            if (coin % 2 == 0){
                printf("Pile\n");
                printf("Vous avez gagné\n");
                win++;
                printf("Victoire:%d\n\n",win);
                printf("Defaite :%d\n\n",lose);
                printf("[-------------------------]\n\n");
            } else {
                printf("Face\n");
                printf("Vous avez perdu\n");
                lose++;
                printf("Victoire:%d\n\n",win);
                printf("Defaite :%d\n\n",lose);
                printf("[-------------------------]\n\n");
            }
        
        } else if(joueur == 2){
            printf("Vous avez choisie Face\n");
            printf("la pièce est lancé...\n\n");

            if (coin % 2 ==0){
                printf("Pile\n");
                printf("Vous avez perdu\n");
                lose++;
                printf("Victoire:%d\n\n",win);
                printf("Defaite :%d\n\n",lose);
                printf("[-------------------------]\n\n");
            } else {
                printf("Face\n");
                printf("Vous avez gagné\n");
                win++;
                printf("Victoire:%d\n\n",win);
                printf("Defaite :%d\n\n",lose);
                printf("[-------------------------]\n\n");
            }
        }
    }
    printf("########### GAME OVER ###########\n\n");
    return 0;
}