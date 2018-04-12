// fichier moduleschess.h

#ifndef MODULESCHESS_H
#define MODULESCHESS_H



#define SUR_MATRICE (10)

//Calcule des positions possible pour les pièces de type Pion
int pospionblanc (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int pospionnoir (int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Calcule des positions possible pour les pièces de type Roi
int posroiblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posroinoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Calcule des positions possible pour les pièces de type Cavalier
int poscavalierblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int poscavaliernoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Calcule des positions possible pour les pièces de type Tour
int postourblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int postournoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Calcule des positions possible pour les pièces de type Fou
int posfoublanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posfounoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Calcule des positions possible pour les pièces de type Dame
int posdameblanc(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);
int posdamenoir(int board[SUR_MATRICE][SUR_MATRICE], int posi, int posj);

//Fonction efféctuant le déplacement des pièces
void changepos(int board[10][10], int posiav, int posjav, int posiap, int posjap);

//Fonction affichant le plateau
void affichplateau(int board[10][10]);

//Gestionnaire de tour pour le joueur blanc
void tourjblanc(int board[10][10], int *play);

//Gestionnaire de tour pour le joueur noir
void tourjnoir(int board[10][10], int *play);

void echecnoir (int board[10][10]);

int isechec(int board[10][10]);

//Fonctions de gestion de la sauvegarde et de chargement
void sauvegarde (int plateau[10][10], int play);
void chargement(plateau[10][10], int* play);


#endif