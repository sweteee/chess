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

int tourjblanc(int board[10][10]){
	int posiav=0;
	int posjav=0;
	int posiap=0;
	int posjap=0;
	printf("Quel pion voulez vous jouer ?\n");
	printf("i = ?");
	scanf("%d", &posiav);
	getchar();
	printf("j = ?");
	scanf("%d", &posjav);
	if (board[posiav][posjav]== 1){
		pospionblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 100 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 2){
		postourblanc(board, posiav, posjav);
	}
	if (board[posiav][posjav]== 3){
		poscavalierblanc(board, posiav, posjav);
	}
	if (board[posiav][posjav]== 4){
		posfoublanc(board, posiav, posjav);
	}
	if (board[posiav][posjav]== 5){
		posroiblanc(board, posiav, posjav);
	}
	if (board[posiav][posjav]== 6){
		posdameblanc(board, posiav, posjav);
	}
	if (board[posiav][posjav]== 0){
		printf("Vous avez selectionné une case vide, veuillez recommencer");
	}
	if (board[posiav][posjav]>= 10){
		printf("Le pion que vous avez choisi n'est pas a vous, veuillez recommencer");
	}
}



int main (){
	int posiav=0;
	int posjav=0;
	int posiap=0;
	int posjap=0;
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
	plateau[1][7]=13;
	plateau[1][3]=14;
	plateau[1][6]=14;
	plateau[1][4]=16;
	plateau[1][5]=15;
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
	plateau[8][4]=6;
	plateau[8][5]=5;
	for (j=1; j<=8; j++){
		plateau[7][j]=1;
	}

	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			printf("%4d",plateau[i][j]);
		}
		printf("\n");
	}
	tourjblanc(plateau);
	
	
	

	
	return 0;
}