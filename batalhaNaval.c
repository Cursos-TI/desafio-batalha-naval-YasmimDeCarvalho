#include <stdio.h>
#include <stdlib.h>

#define TAB 10
#define LINHA 10
#define COLUNA 9
#define HAB 5

void cone(int array[TAB][TAB]);
void cruz(int array[TAB][TAB]);
void octaedro(int array[TAB][TAB]);
void finalWar(int array[TAB][TAB]);

int main() {

    int navyWar[TAB][TAB] = {{0}};

//----------navios------------//
    navyWar[2][3] = 3;
    navyWar[2][4] = 3;
    navyWar[2][5] = 3;

//----------shapes----------//
    cone(navyWar);
    cruz(navyWar);
    octaedro(navyWar);

    finalWar(navyWar);



    

    
   
}

void cone(int array[TAB][TAB]){


    int origemLinha = 4;
    int origemColuna = 4;

    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {

            if (j >= HAB/2 - i && j <= HAB/2 + i) {

                int l = origemLinha + (i - HAB/2);
                int c = origemColuna + (j - HAB/2);

                if (l >= 0 && l < TAB && c >= 0 && c < TAB) {
                    if (array[l][c] != 3) array[l][c] = 5;
                }
            }
        }
    }

 
    // for(int x = 0 ; x < LINHA ; x++){
    //     for(int y = 0 ; y <= COLUNA ; y++){
    //         printf("%d ", array[x][y]);
    //     }
    //     printf("\n");
        
    // }


}

void cruz(int array[TAB][TAB]) {
    int origemLinha = 4;   // centro do tabuleiro
    int origemColuna = 4;

    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {

            if (i == HAB/2 || j == HAB/2) {   // forma da cruz

                int l = origemLinha + (i - HAB/2);
                int c = origemColuna + (j - HAB/2);

               if (array[l][c] != 3) array[l][c] = 5;
            }
        }
    }

    // for(int x = 0 ; x < TAB ; x++){
    //     for(int y = 0 ; y < TAB ; y++){
    //         printf("%d ", array[x][y]);
    //     }
    //     printf("\n");
    // }
}

void octaedro(int array[TAB][TAB]) {
    
    int origemLinha = 4;
    int origemColuna = 4;

    for (int i = 0; i < HAB; i++) {
        for (int j = 0; j < HAB; j++) {

            if (abs(i - HAB/2) + abs(j - HAB/2) <= HAB/2) {

                int l = origemLinha + (i - HAB/2);
                int c = origemColuna + (j - HAB/2);

                if (array[l][c] != 3) array[l][c] = 5;
            }
        }
    }

    
    // for(int x = 0 ; x < TAB ; x++){
    //     for(int y = 0 ; y < TAB ; y++){
    //         printf("%d ", array[x][y]);
    //     }
    //     printf("\n");
    // }
}

void finalWar(int array[TAB][TAB]) {
    for (int x = 0; x < TAB; x++) {
        for (int y = 0; y < TAB; y++) {
            printf("%d ", array[x][y]);
        }
        printf("\n");
    }
}

