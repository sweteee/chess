#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "moduleschess.h"


#define REVERSEVIDEO "\E[7m"
#define NORMAL "\E[0m"

// blancs : pion = 1; tours = 2; cavaliers = 3; fous = 4; roi = 5; dame = 6;
// noirs : pion = 11; tours = 12; cavaliers = 13; fous = 14; roi = 15; dame = 16;

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





int pospionblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){
	int i =0;
	int j=0;

	if ((board[posi-1][posj-1]) >= 10){
		board[posi-1][posj-1] = board[posi-1][posj-1] +100;
	}
	if ((board[posi-1][posj+1]) >= 10){
		board[posi-1][posj+1] = board[posi-1][posj+1] +100;
	}
	if ((board[posi-1][posj-1])<=10 && (board[posi-1][posj+1])<=10 && (board[posi-1][posj]== 0)){
		board[posi-1][posj] = 100;
	}
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}

int pospionnoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){
	int i =0;
	int j=0;

	if ((board[posi+1][posj-1]) <= 10 && (board[posi+1][posj-1]) >=1){
		board[posi+1][posj-1] = board[posi+1][posj-1] +100;
	}
	if ((board[posi+1][posj+1]) <= 10 && (board[posi+1][posj+1]) >= 1){
		board[posi+1][posj+1] = board[posi+1][posj+1] +100;
	}
	if (((board[posi+1][posj-1])>=10 || (board[posi+1][posj-1])==0)  && ((board[posi+1][posj+1])>=10 || (board[posi+1][posj+1])==0 )&& (board[posi+1][posj]== 0)){
		board[posi+1][posj] = 100;
	}
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}


int posroiblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {
	int i = 0;
	int j = 0;
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
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}

int posroinoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {
	int i = 0;
	int j = 0;
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
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}



int poscavalierblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {
	int i = 0;
	int j = 0;
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
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}

int poscavaliernoir (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj) {
	int i = 0;
	int j = 0;
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
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}






int postourblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 
	int i=0;
	int j=0;
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

	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}



int postournoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 
	int i=0;
	int j=0;
	
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
	
	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}


int posfoublanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 
	int i=0;
	int j=0;

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

	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}

int posfounoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){ 
	int i=0;
	int j=0;

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

	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}



int posdameblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){
	int i=0;
	int j=0;

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

	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}



int posdamenoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj){
	int i=0;
	int j=0;

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

	
	
	for (i=0; i<= 9; i++){
		for (j=0; j<= 9; j++){
			if (board[i][j] >= 100 && board[i][j]<1000){
				printf( REVERSEVIDEO"%4d"NORMAL, board[i][j]-100);
				
			}
			else{
				printf("%4d", board[i][j]);
			}
			
		}
		printf("\n");
	}
	return 0;	
}







