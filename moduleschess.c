#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "moduleschess.h"


#define REVERSEVIDEO "\E[7m"
#define NORMAL "\E[0m"

// blancs : pion = 1; tours = 2; cavaliers = 3; fous = 4; roi = 5; dame = 6;
// noirs : pion = 11; tours = 12; cavaliers = 13; fous = 14; roi = 15; dame = 16;
/*
int pospionblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int pospionnoir (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

int posroiblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posroinoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

int poscavalierblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int poscavaliernoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

int postourblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int postournoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

int posfoublanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posfounoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

int posdameblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posdamenoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

void changepos(int board[10][10], int posiav, int posjav, int posiap, int posjap);


*/


void affichplateau(int board[10][10]){
	int i=0;
	int j=0;
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			printf("%4d",board[i][j]);
		}
		printf("\n");
	}

}



void changepos(int board[10][10], int posiav, int posjav, int posiap, int posjap){
	board[posiap][posjap] = board[posiav][posjav];
	board[posiav][posjav] = 0;
}




int pospionblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){


	if ((board[posi-1][posj-1]) >= 10){
		board[posi-1][posj-1] = board[posi-1][posj-1] +100;
	}
	if ((board[posi-1][posj+1]) >= 10){
		board[posi-1][posj+1] = board[posi-1][posj+1] +100;
	}
	if ((board[posi-1][posj-1])<=10 && (board[posi-1][posj+1])<=10 && (board[posi-1][posj]== 0)){
		board[posi-1][posj] = 100;
	}	
}

int pospionnoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){


	if ((board[posi+1][posj-1]) <= 10 && (board[posi+1][posj-1]) >=1){
		board[posi+1][posj-1] = board[posi+1][posj-1] +100;
	}
	if ((board[posi+1][posj+1]) <= 10 && (board[posi+1][posj+1]) >= 1){
		board[posi+1][posj+1] = board[posi+1][posj+1] +100;
	}
	if (((board[posi+1][posj-1])>=10 || (board[posi+1][posj-1])==0)  && ((board[posi+1][posj+1])>=10 || (board[posi+1][posj+1])==0 )&& (board[posi+1][posj]== 0)){
		board[posi+1][posj] = 100;
	}

}


int posroiblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {

	if ((board[posi-1][posj-1]) >= 10 || (board[posi-1][posj-1]) == 0) {
		board[posi-1][posj-1] = board[posi-1][posj-1] + 100;

	}
	if ((board[posi-1][posj]) >= 10 || (board[posi-1][posj] == 0)) {
		board[posi-1][posj] = board[posi-1][posj] + 100;

	}
	if ((board[posi-1][posj+1]) >= 10 || (board[posi-1][posj+1] == 0)) {
		board[posi-1][posj+1] = board[posi-1][posj+1] + 100;

	}
	if ((board[posi][posj-1]) >= 10 || (board[posi][posj-1]) == 0) {
		board[posi][posj-1] = board[posi][posj-1] + 100;

	}
	if ((board[posi][posj+1]) >= 10 || (board[posi][posj+1]) == 0) {
		board[posi][posj+1] = board[posi][posj+1] + 100;

	}
	if ((board[posi+1][posj-1]) >= 10 || (board[posi+1][posj-1]) == 0) {
		board[posi+1][posj-1] = board[posi+1][posj-1] + 100;

	}
	if ((board[posi+1][posj]) >= 10 || (board[posi+1][posj]) == 0) {
		board[posi+1][posj] = board[posi+1][posj] + 100;

	}
	if ((board[posi+1][posj+1]) >= 10 || (board[posi+1][posj+1]) == 0) {
		board[posi+1][posj+1] = board[posi+1][posj+1] + 100;

	}
	
	
}

int posroinoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {

	if ((board[posi-1][posj-1]) <= 10 ) {
		board[posi-1][posj-1] = board[posi-1][posj-1] + 100;

	}
	if ((board[posi-1][posj]) <= 10 ) {
		board[posi-1][posj] = board[posi-1][posj] + 100;

	}
	if ((board[posi-1][posj+1]) <= 10 ) {
		board[posi-1][posj+1] = board[posi-1][posj+1] + 100;

	}
	if ((board[posi][posj-1]) <= 10 ) {
		board[posi][posj-1] = board[posi][posj-1] + 100;

	}
	if ((board[posi][posj+1]) <= 10 ) {
		board[posi][posj+1] = board[posi][posj+1] + 100;

	}
	if ((board[posi+1][posj-1]) <= 10 ) {
		board[posi+1][posj-1] = board[posi+1][posj-1] + 100;

	}
	if ((board[posi+1][posj]) <= 10 ) {
		board[posi+1][posj] = board[posi+1][posj] + 100;

	}
	if ((board[posi+1][posj+1]) <= 10 ) {
		board[posi+1][posj+1] = board[posi+1][posj+1] + 100;

	}

}



int poscavalierblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {

	if ((board[posi-1][posj-2] >= 10 || board[posi-1][posj-2] == 0)) {
 	   board[posi-1][posj-2] = board[posi-1][posj-2] + 100;
 	}
 	if ((board[posi-2][posj-1] >= 10 || board[posi-2][posj-1] == 0)) {
	    board[posi-2][posj-1] = board[posi-2][posj-1] + 100;
	}
	if ((board[posi-2][posj+1] >= 10 || board[posi-2][posj+1] == 0)) {
	    board[posi-2][posj+1] = board[posi-2][posj+1] + 100;
	}
	if ((board[posi-1][posj+2] >= 10 || board[posi-1][posj+2] == 0)) {
	    board[posi-1][posj+2] = board[posi-1][posj+2] + 100;
	}
	if (( board[posi+1][posj-2] >= 10 || board[posi+1][posj-2] == 0)) {
	    board[posi+1][posj-2] = board[posi+1][posj-2] + 100;
	}
	if ((board[posi+2][posj-1] >= 10 || board[posi+2][posj-1] == 0)) {
	    board[posi+2][posj-1] = board[posi+2][posj-1] + 100;
	}
	if ((board[posi+2][posj+1] >= 10 || board[posi+2][posj+1] == 0)) {
	    board[posi+2][posj+1] = board[posi+2][posj+1] + 100;
	}
	if ((board[posi+1][posj+2] >= 10 || board[posi+1][posj+2] == 0)) {
	    board[posi+1][posj+2] = board[posi+1][posj+2] + 100;
	}

}

int poscavaliernoir (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {

	if (board[posi-1][posj-2] <= 10) {
 	   board[posi-1][posj-2] = board[posi-1][posj-2] + 100;
 	}
 	if (board[posi-2][posj-1] <= 10) {
	    board[posi-2][posj-1] = board[posi-2][posj-1] + 100;
	}
	if (board[posi-2][posj+1] <= 10) {
	    board[posi-2][posj+1] = board[posi-2][posj+1] + 100;
	}
	if (board[posi-1][posj+2] <= 10) {
	    board[posi-1][posj+2] = board[posi-1][posj+2] + 100;
	}
	if ( board[posi+1][posj-2] <= 10) {
	    board[posi+1][posj-2] = board[posi+1][posj-2] + 100;
	}
	if (board[posi+2][posj-1] <= 10) {
	    board[posi+2][posj-1] = board[posi+2][posj-1] + 100;
	}
	if (board[posi+2][posj+1] <= 10) {
	    board[posi+2][posj+1] = board[posi+2][posj+1] + 100;
	}
	if (board[posi+1][posj+2] <= 10) {
	    board[posi+1][posj+2] = board[posi+1][posj+2] + 100;
	}

}






int postourblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 
	int i,j;
	int pos_ad_i =0;
	int pos_ad_j =0;
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;

	int b=0;
	int c=0;
	int d=0;
	int e=0;
		
	printf("test6");
	while (a1 <= 1){
		for (i=posi+1; i<=9; i++){
			
				if (board[i][posj] >=1){
					
					b=i;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi-1; i>=0; i--){
				if (board[i][posj] >=1){
					c=i;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (j=posj+1; j<=9; j++){
			if (board[posi][j] >=1){
				d=j;
				break;
			}
			a3++;
		}
		
	}
	while (a4 <= 1){
			for (j=posj-1; j>=0; j--){
				if (board[posi][j] >=1){
			
					e=j;
					break;
				
				}
				a4++;
			
		}
	}
	printf("test6");
	
	//De la tour au pion suivant en dessous
	if (board[b][posj]<=10){
		for (i=posi+1; i<= b-1; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}
	
	if (board[b][posj]>=10 && board[b][posj]<1000){
		for (i=posi+1; i<= b; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}
	
	if (board[b][posj]>=1000){
		for (i=posi+1; i<= b-1; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}


	//de la tour au pion suivant au dessus
	if (board[c][posj]<=10){
		for (i=posi-1; i>= c+1; i--){
			board[i][posj]=board[i][posj]+100;
		}
	}
	
	if (board[c][posj]>=10 && board[c][posj]<1000){
		for (i=posi-1; i>= c; i--){
			board[i][posj]=board[i][posj]+100;
	}
	}
	
	
	if (board[c][posj]>=1000){
		for (i=posi-1; i>= c+1; i--){
			board[i][posj]=board[i][posj]+100;
		}
	}

	//de la tour au pion suivant a droite
	if (board[posi][d]<=10){
		for (j=posj+1; j<= d-1; j++){
			board[posi][j]=board[posi][j]+100;
	}
	}
	
	if (board[posi][d]>=10 && board[posi][d]<1000){
		for (j=posj+1; j <= d; j++){
			board[posi][j]=board[posi][j]+100;
	}
	}
	
	
	if (board[posi][d]>=1000){
		for (j=posj+1; j== d-1; j++){
			board[posi][j]=board[posi][j]+100;
		}
	}
	
	
	//de la tour au pion suivant a gauche
	if (board[posi][e]<=10){
		for (j=posj-1; j>= e+1; j--){
			board[posi][j]=board[posi][j]+100;
	}
	}
	
	if (board[posi][e]>=10 && board[posi][e]<1000){
		for (j=posj-1; j>= e; j--){
			board[posi][j]=board[posi][j]+100;
	}
	}
	
	
	if (board[posi][e]>=1000){
		for (j=posj-1; j>= e+1; j--){
			board[posi][j]=board[posi][j]+100;
		}
	}

	
}



int postournoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 

	int i,j;
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;

	int b=0;
	int c=0;
	int d=0;
	int e=0;
	

	
	while (a1 <= 1){
		for (i=posi+1; i<=9; i++){
			
				if (board[i][posj] >=1){
					
					b=i;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi-1; i>=0; i--){
				if (board[i][posj] >=1){
					c=i;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (j=posj+1; j<=9; j++){
			if (board[posi][j] >=1){
				d=j;
				break;
			}
			a3++;
		}
		
	}
		while (a4 <= 1){
			for (j=posj-1; j>=0; j--){
				if (board[posi][j] >=1){
			
					e=j;
					break;
				
				}
				a4++;
			
		}
	}
	
	//De la tour au pion suivant en dessous
	if (board[b][posj]>=1000){
		for (i=posi+1; i<= b-1; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[b][posj]>=10 && board[b][posj]<1000){
			for (i=posi+1; i<= b-1; i++){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[b][posj]<=10){
				for (i=posi+1; i<= b; i++){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant au dessus

	if (board[c][posj]>=1000){
		for (i=posi-1; i>= c+1; i--){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[c][posj]>=10 && board[c][posj]<1000){
			for (i=posi-1; i>= c+1; i--){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[c][posj]<=10){
				for (i=posi-1; i>= c; i--){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant a droite
	if (board[posi][d]>=1000){
		for (j=posj+1; j<= d-1; j++){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][d]>=10 && board[posi][d]<1000){
			for (j=posj+1; j <= d-1; j++){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][d]<=10){
				for (j=posj+1; j<= d; j++){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}

	}
	
	//de la tour au pion suivant a gauche
	
	if (board[posi][e]>=1000){
		for (j=posj-1; j>= e+1; j--){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][e]>=10 && board[posi][e]<1000){
			for (j=posj-1; j>= e+1; j--){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][e]<=10){
				for (j=posj-1; j>= e; j--){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}
	}

}


int posfoublanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 

	int i,j;
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;

	int bi=0;
	int bj=0;
	int ci=0;
	int cj=0;
	int di=0;
	int dj=0;
	int ei=0;
	int ej=0;
	

	
	while (a1 <= 1){
		for (i=posi+1, j= posj+1; i<=9 && j<= 9; i++, j++){
			
				if (board[i][j] >=1){
					
					bi=i;
					bj=j;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi+1, j = posj-1; i<= 9 && j>=0; i++, j--){
				if (board[i][j] >=1){
					ci=i;
					cj=j;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (i=posi-1, j=posj-1; i>=0 && j>=0; i--,j--){
			if (board[i][j] >=1){
				di=i;
				dj=j;
				break;
			}
			a3++;
		}
		
	}
	while (a4 <= 1){
			for (i=posi-1, j=posj+1; i>= 0 && j<=9; i--, j++){
				if (board[i][j] >=1){
					ei=i;
					ej=j;
					break;
				
				}
				a4++;
			
		}
	}
	
	//Diago bas droite
	if (board[bi][bj]>=1000){
		for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[bi][bj]>=10 && board[bi][bj]<1000){
			for (i=posi+1, j= posj+1; i<=bi && j<= bj; i++, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[bi][bj]<=10){
				for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago bas gauche

	if (board[ci][cj]>=1000){
		for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ci][cj]>=10 && board[ci][cj]<1000){
			for (i=posi+1, j = posj-1; i<= ci && j>=cj; i++, j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ci][cj]<=10){
				for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago haut gauche
	if (board[di][dj]>=1000){
		for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[di][dj]>=10 && board[di][dj]<1000){
			for (i=posi-1, j=posj-1; i>=di && j>=dj; i--,j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[di][dj]<=10){
				for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}

	}
	
	//diago haut droit
	
	if (board[ei][ej]>=1000){
		for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ei][ej]>=10 && board[ei][ej]<1000){
			for (i=posi-1, j=posj+1; i>= ei && j<=ej; i--, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ei][ej]<=10){
				for (i=posi-1, j=posj+1; i>= ei+1 && j<=ei-1; i--, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}

}

int posfounoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 


	int i,j;
	
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;

	int bi=0;
	int bj=0;
	int ci=0;
	int cj=0;
	int di=0;
	int dj=0;
	int ei=0;
	int ej=0;

	
	while (a1 <= 1){
		for (i=posi+1, j= posj+1; i<=9 && j<= 9; i++, j++){
			
				if (board[i][j] >=1){
					
					bi=i;
					bj=j;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi+1, j = posj-1; i<= 9 && j>=0; i++, j--){
				if (board[i][j] >=1){
					ci=i;
					cj=j;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (i=posi-1, j=posj-1; i>=0 && j>=0; i--,j--){
			if (board[i][j] >=1){
				di=i;
				dj=j;
				break;
			}
			a3++;
		}
		
	}
	while (a4 <= 1){
			for (i=posi-1, j=posj+1; i>= 0 && j<=9; i--, j++){
				if (board[i][j] >=1){
					ei=i;
					ej=j;
					break;
				
				}
				a4++;
			
		}
	}
	
	//Diago bas droite
	if (board[bi][bj]>=1000){
		for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[bi][bj]>=10 && board[bi][bj]<1000){
			for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[bi][bj]<=10){
				for (i=posi+1, j= posj+1; i<=bi && j<= bj; i++, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago bas gauche

	if (board[ci][cj]>=1000){
		for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ci][cj]>=10 && board[ci][cj]<1000){
			for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ci][cj]<=10){
				for (i=posi+1, j = posj-1; i<= ci && j>=cj; i++, j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago haut gauche
	if (board[di][dj]>=1000){
		for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[di][dj]>=10 && board[di][dj]<1000){
			for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[di][dj]<=10){
				for (i=posi-1, j=posj-1; i>=di && j>=dj; i--,j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}

	}
	
	//diago haut droit
	
	if (board[ei][ej]>=1000){
		for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ei][ej]>=10 && board[ei][ej]<1000){
			for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ei][ej]<=10){
				for (i=posi-1, j=posj+1; i>= ei && j<=ei; i--, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}

}



int posdameblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){

	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int a5=0;
	int a6=0;
	int a7=0;
	int a8=0;
	
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	
	int bi=0;
	int bj=0;
	int ci=0;
	int cj=0;
	int di=0;
	int dj=0;
	int ei=0;
	int ej=0;


	int i,j;
	
	while (a1 <= 1){
		for (i=posi+1; i<=9; i++){
			
				if (board[i][posj] >=1){
					
					b=i;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi-1; i>=0; i--){
				if (board[i][posj] >=1){
					c=i;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (j=posj+1; j<=9; j++){
			if (board[posi][j] >=1){
				d=j;
				break;
			}
			a3++;
		}
		
	}
	while (a4 <= 1){
			for (j=posj-1; j>=0; j--){
				if (board[posi][j] >=1){
			
					e=j;
					break;
				
				}
				a4++;
			
		}
	}
	while (a5 <= 1){
		for (i=posi+1, j= posj+1; i<=9 && j<= 9; i++, j++){
			
				if (board[i][j] >=1){
					
					bi=i;
					bj=j;
					break;
				
				}
				a5++;
			
		}
		
	}
	while (a6 <= 1){
		for (i=posi+1, j = posj-1; i<= 9 && j>=0; i++, j--){
				if (board[i][j] >=1){
					ci=i;
					cj=j;
					break;
				
				}
			a6++;
		}
	}
	while (a7 <= 1){
		for (i=posi-1, j=posj-1; i>=0 && j>=0; i--,j--){
			if (board[i][j] >=1){
				di=i;
				dj=j;
				break;
			}
			a7++;
		}
		
	}
	while (a8 <= 1){
			for (i=posi-1, j=posj+1; i>= 0 && j<=9; i--, j++){
				if (board[i][j] >=1){
					ei=i;
					ej=j;
					break;
				
				}
				a8++;
			
		}
	}

	
	//De la tour au pion suivant en dessous
	if (board[b][posj]>=1000){
		for (i=posi+1; i<= b-1; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[b][posj]>=10 && board[b][posj]<1000){
			for (i=posi+1; i<= b; i++){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[b][posj]<=10){
				for (i=posi+1; i<= b-1; i++){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant au dessus

	if (board[c][posj]>=1000){
		for (i=posi-1; i>= c+1; i--){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[c][posj]>=10 && board[c][posj]<1000){
			for (i=posi-1; i>= c; i--){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[c][posj]<=10){
				for (i=posi-1; i>= c+1; i--){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant a droite
	if (board[posi][d]>=1000){
		for (j=posj+1; j<= d-1; j++){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][d]>=10 && board[posi][d]<1000){
			for (j=posj+1; j <= d; j++){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][d]<=10){
				for (j=posj+1; j<= d-1; j++){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}

	}
	
	//de la tour au pion suivant a gauche
	
	if (board[posi][e]>=1000){
		for (j=posj-1; j>= e+1; j--){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][e]>=10 && board[posi][e]<1000){
			for (j=posj-1; j>= e; j--){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][e]<=10){
				for (j=posj-1; j>= e+1; j--){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}
	}
	//Diago bas droite
	if (board[bi][bj]>=1000){
		for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[bi][bj]>=10 && board[bi][bj]<1000){
			for (i=posi+1, j= posj+1; i<=bi && j<= bj; i++, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[bi][bj]<=10){
				for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago bas gauche

	if (board[ci][cj]>=1000){
		for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ci][cj]>=10 && board[ci][cj]<1000){
			for (i=posi+1, j = posj-1; i<= ci && j>=cj; i++, j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ci][cj]<=10){
				for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago haut gauche
	if (board[di][dj]>=1000){
		for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[di][dj]>=10 && board[di][dj]<1000){
			for (i=posi-1, j=posj-1; i>=di && j>=dj; i--,j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[di][dj]<=10){
				for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}

	}
	
	//diago haut droit
	
	if (board[ei][ej]>=1000){
		for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ei][ej]>=10 && board[ei][ej]<1000){
			for (i=posi-1, j=posj+1; i>= ei && j<=ej; i--, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ei][ej]<=10){
				for (i=posi-1, j=posj+1; i>= ei+1 && j<=ei-1; i--, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}

}



int posdamenoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){


	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int a5=0;
	int a6=0;
	int a7=0;
	int a8=0;
	
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	
	int bi=0;
	int bj=0;
	int ci=0;
	int cj=0;
	int di=0;
	int dj=0;
	int ei=0;
	int ej=0;
	
	int i,j;

	while (a1 <= 1){
		for (i=posi+1; i<=9; i++){
			
				if (board[i][posj] >=1){
					
					b=i;
					break;
				
				}
				a1++;
			
		}
		
	}
	while (a2 <= 1){
		for (i=posi-1; i>=0; i--){
				if (board[i][posj] >=1){
					c=i;
					break;
				
				}
			a2++;
		}
	}
	while (a3 <= 1){
		for (j=posj+1; j<=9; j++){
			if (board[posi][j] >=1){
				d=j;
				break;
			}
			a3++;
		}
		
	}
	while (a4 <= 1){
			for (j=posj-1; j>=0; j--){
				if (board[posi][j] >=1){
			
					e=j;
					break;
				
				}
				a4++;
			
		}
	}
	while (a5 <= 1){
		for (i=posi+1, j= posj+1; i<=9 && j<= 9; i++, j++){
			
				if (board[i][j] >=1){
					
					bi=i;
					bj=j;
					break;
				
				}
				a5++;
			
		}
		
	}
	while (a6 <= 1){
		for (i=posi+1, j = posj-1; i<= 9 && j>=0; i++, j--){
				if (board[i][j] >=1){
					ci=i;
					cj=j;
					break;
				
				}
			a6++;
		}
	}
	while (a7 <= 1){
		for (i=posi-1, j=posj-1; i>=0 && j>=0; i--,j--){
			if (board[i][j] >=1){
				di=i;
				dj=j;
				break;
			}
			a7++;
		}
		
	}
	while (a8 <= 1){
			for (i=posi-1, j=posj+1; i>= 0 && j<=9; i--, j++){
				if (board[i][j] >=1){
					ei=i;
					ej=j;
					break;
				
				}
				a8++;
			
		}
	}

	
	//De la tour au pion suivant en dessous
	if (board[b][posj]>=1000){
		for (i=posi+1; i<= b-1; i++){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[b][posj]>=10 && board[b][posj]<1000){
			for (i=posi+1; i<= b-1; i++){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[b][posj]<=10){
				for (i=posi+1; i<= b; i++){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant au dessus

	if (board[c][posj]>=1000){
		for (i=posi-1; i>= c+1; i--){
			board[i][posj]=board[i][posj]+100;
		}
	}
	else{
		if (board[c][posj]>=10 && board[c][posj]<1000){
			for (i=posi-1; i>= c+1; i--){
				board[i][posj]=board[i][posj]+100;
			}
		}
		else{
			if (board[c][posj]<=10){
				for (i=posi-1; i>= c; i--){
					board[i][posj]=board[i][posj]+100;
				}
			}
		}
	}


	//de la tour au pion suivant a droite
	if (board[posi][d]>=1000){
		for (j=posj+1; j<= d-1; j++){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][d]>=10 && board[posi][d]<1000){
			for (j=posj+1; j <= d-1; j++){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][d]<=10){
				for (j=posj+1; j<= d; j++){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}

	}
	
	//de la tour au pion suivant a gauche
	
	if (board[posi][e]>=1000){
		for (j=posj-1; j>= e+1; j--){
			board[posi][j]=board[posi][j]+100;
		}
	}
	else{
		if (board[posi][e]>=10 && board[posi][e]<1000){
			for (j=posj-1; j>= e+1; j--){
				board[posi][j]=board[posi][j]+100;
			}
		}
		else{
			if (board[posi][e]<=10){
				for (j=posj-1; j>= e; j--){
					board[posi][j]=board[posi][j]+100;
				}
			}
		}
	}
	//Diago bas droite
	if (board[bi][bj]>=1000){
		for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[bi][bj]>=10 && board[bi][bj]<1000){
			for (i=posi+1, j= posj+1; i<=bi-1 && j<= bj-1; i++, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[bi][bj]<=10){
				for (i=posi+1, j= posj+1; i<=bi && j<= bj; i++, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago bas gauche

	if (board[ci][cj]>=1000){
		for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ci][cj]>=10 && board[ci][cj]<1000){
			for (i=posi+1, j = posj-1; i<= ci-1 && j>=cj+1; i++, j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ci][cj]<=10){
				for (i=posi+1, j = posj-1; i<= ci && j>=cj; i++, j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}


	//diago haut gauche
	if (board[di][dj]>=1000){
		for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[di][dj]>=10 && board[di][dj]<1000){
			for (i=posi-1, j=posj-1; i>=di+1 && j>=dj+1; i--,j--){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[di][dj]<=10){
				for (i=posi-1, j=posj-1; i>=di && j>=dj; i--,j--){
					board[i][j]=board[i][j]+100;
				}
			}
		}

	}
	
	//diago haut droit
	
	if (board[ei][ej]>=1000){
		for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
			board[i][j]=board[i][j]+100;
		}
	}
	else{
		if (board[ei][ej]>=10 && board[ei][ej]<1000){
			for (i=posi-1, j=posj+1; i>= ei+1 && j<=ej-1; i--, j++){
				board[i][j]=board[i][j]+100;
			}
		}
		else{
			if (board[ei][ej]<=10){
				for (i=posi-1, j=posj+1; i>= ei && j<=ei; i--, j++){
					board[i][j]=board[i][j]+100;
				}
			}
		}
	}

}



void echecnoir (int board[10][10])
{
	int i;
	int j;
	
	
	for (i=1; i<=8; i++){
		for (j=1; j<=8; j++){
			if(board[i][j]==1){
				pospionblanc(board, i, j);
				if (isechec(board)==1){
					printf("echec");
					break;
				}
			}
			else{
				if(board[i][j]==2){

					postourblanc(board, i, j);
					if (isechec(board)==1){
						printf("echec");
						break;
					}
				}
				else{
					if(board[i][j]==3){
						poscavalierblanc(board, i, j);
						if (isechec(board)==1){
							printf("echec");
							break;
						}
					}
					else{
						if(board[i][j]==4){
							posfoublanc(board, i, j);
							if (isechec(board)==1){
								printf("echec");
								break;
							}
						}
						else{}
							if(board[i][j]==5){
								posroiblanc(board, i, j);
								if (isechec(board)==1){
									printf("echec");
									break;
								}
							}
							else{
								if(board[i][j]==6){
									posdameblanc(board, i, j);
									if (isechec(board)==1){
										printf("echec");
										break;
									}
								}
							}
						}
					}
				}
			}			
		}
    affichplateau(board);
}




void affichpos(int board[10][10]){
	int echec=0;
	int i,j;
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j]==105 || board[i][j]==115){
				echec=1;
			}
			if (board[i][j] >= 100 && board[i][j]<1000){
				board[i][j]=board[i][j]-100;
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}

}

int isechec(int board[10][10]){
	int echec=0;
	int i,j;
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j]==105 || board[i][j]==115){
				echec=1;
			}
		}
	}
	return echec;
}



void sauvegarde (int plateau[10][10]) 
{
int a,b,i=0, test1;
char couleur[2], nomfichier[50];
FILE*fic;
    printf("Nom de fichier ?");
    scanf("%s",nomfichier);
    fic = fopen(nomfichier, "w");
    if(fic==NULL)
    {
        printf("Impossible de créer le fichier\n");
        exit(-1);
    }
    else
    {
        for (a=1;a<=8;a++)
        {
            for(b=1;b<=8;b++)
            {
	            test1=plateau[a][b];
                fprintf( fic, "%3d\n", test1);
            }
         }
    }
      
    fclose(fic);
    printf("Echiquier sauvegarde\n");
       
}




void chargement(plateau[10][10])
{
int a=0, b=0;
//int *retour[64];
int maxligne = 3;
char nomfichier[50];
FILE*fic;
    printf("Donnez le nom du fichier:\n");
    scanf("%s",nomfichier);


    fic=fopen(nomfichier,"r");
    if (fic==NULL)
    {
        printf("Problème d'acces au fichier %s\n",nomfichier);
        exit(-1);
        
    }
       
    else
	{
		//fgets(retour, maxligne, fic);
			for(a=1; a<=8; a++){
				for(b=1; b<=8; b++){
					fprintf(fic, "%d", plateau[a][b]);
					
				}
			}
		
	}
	fclose(fic);
}
 
 
 

void tourjblanc(int board[10][10]){
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
	if (board[posiav][posjav]== 0){
		printf("Vous avez selectionné une case vide, veuillez recommencer\n");
	}
	if (board[posiav][posjav]>= 10){
		printf("Le pion que vous avez choisi n'est pas a vous, veuillez recommencer\n");
	}

	if (board[posiav][posjav]== 1){
		pospionblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 2){
		postourblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 3){
		poscavalierblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 4){
		posfoublanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 5){
		posroiblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
	if (board[posiav][posjav]== 6){
		posdameblanc(board, posiav, posjav);
		printf("Sur quelle case voulez vous le déplacer?\n");
		printf("i = ?");
		scanf("%d", &posiap);
		getchar();
		printf("j = ?");
		scanf("%d", &posjap);
		if (board[posiap][posjap] >= 10 && board[posiap][posjap] < 1000){
			changepos(board, posiav, posjav, posiap, posjap);
			affichplateau(board);
		}
		else{
			printf("Vous ne pouvez pas jouer ici");
		}
	}
}





