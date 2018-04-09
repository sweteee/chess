#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "moduleschess.h"


#define REVERSEVIDEO "\E[7m"
#define NORMAL "\E[0m"
#define NB_LIGNE (8)
#define SUR_MATRICE (10)
#define I_TEST (4)
#define J_TEST (4)
// blancs : pion = 1; tours = 2; cavaliers = 3; fous = 4; roi = 5; dame = 6;
// noirs : pion = 11; tours = 12; cavaliers = 13; fous = 14; roi = 15; dame = 16;







int main (){
	int posiav=0;
	int posjav=0;
	int posiap=0;
	int posjap=0;
	int end=0;
	int play=0;
	int plateau [SUR_MATRICE][SUR_MATRICE];
	int i=0;
	int j=0;
	//int tourblanc=0;
	//int tourblanc=0;
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			plateau[i][j]=1000;
		}
	}
	
	for (i=1; i<= 8; i++){
		for (j=1; j<= 8; j++){
			plateau[i][j]=0;
		}
	}

	//mise en place des pions noirs
	plateau[1][1]=12;
	plateau[1][8]=12;
	plateau[1][2]=13;
	plateau[1][7]=14;
	plateau[1][3]=14;
	plateau[1][6]=14;
	plateau[1][5]=16;
	plateau[1][4]=15;
	for (j=1; j<=8; j++){
		plateau[2][j]=11;
	}
	//mise en place des pions blancs
	plateau[8][1]=2;
	plateau[8][8]=2;
	plateau[8][2]=3;
	plateau[8][7]=3;
	plateau[8][3]=4;
	plateau[8][6]=4;
	plateau[8][5]=6;
	plateau[8][4]=5;
	for (j=1; j<=8; j++){
		plateau[7][j]=1;
	}
	
	
	for (i=1; i<= 8; i++){
		for (j=1; j<= 8; j++){
			printf("%4d",plateau[i][j]);
		}
		printf("\n");
	}
	getchar();
	/*while(end == 0){
		if (play == 1){
			tourjblanc(plateau);
		}
		if (play == 2){
			tourjnoir(plateau);
		}
	}
	*/
	//tourjblanc(plateau);
	//tourjnoir(plateau);
	//chargement(plateau);
	//sauvegarde(plateau);
	//getchar();
	affichplateau(plateau);
	getchar();
	//sauvegarde(plateau, play);
	chargement(plateau, play);
	affichplateau(plateau);
	//printf("%d\n", play);

	//echecnoir(plateau);
	
	

	
	return 0;
}