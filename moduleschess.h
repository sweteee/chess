// fichier moduleschess.h

#ifndef MODULESCHESS_H
#define MODULESCHESS_H



#define SUR_MATRICE (10)


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


#endif