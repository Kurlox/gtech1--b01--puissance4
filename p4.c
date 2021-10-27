#include <stdio.h>
#include <stdbool.h>

#define NBL 6
#define NBC 7
char tab[NBL][NBC];
char tokens[] = "ox";
void flushstdin() {
  int c;
  while((c = getchar()) != '\n' && c != EOF);
}

  // Création du tableau

int init(void) {
  for(int l=0;l<NBL;l++) {
    for(int c=0;c<NBC;c++) {
      tab[l][c] = '.';
    }
  }
}
  // Affichage tableau

int print(void) {
  printf("\n-------------\n");
  for(int l=0;l<NBL;l++) {
    for(int c=0;c<NBC;c++) {
      printf("%c ", tab[l][c]);
    }
    printf("\n");
  }
  printf("-------------\n");
  printf("1 2 3 4 5 6 7\n");
}
  // Fonction mise en place des jetons

int jeton(int colonne, int player) {
 // for(tab[0][colonne]) {
    //if(tab[0][colonne] != '.') {
    //printf("Tableau plein, égalité");
    //}
  //}

  for(int l=NBL;l>=0;l--) {
    if(tab[l][colonne] == '.') {
      tab[l][colonne] = tokens[player];
      break;
    }

    if(tab[0][colonne] != '.') {
      printf("colonne pleine\n");
      break;
    }

    else {
      continue;
    }
  }
}


  // Jeu
void main(void) {
  init();
  printf("Welcome to Puissance4!\n");
  printf("!! Si vous jouez dans une colonne déjà remplie, votre tour sera automatiquement passé. Fallait être attentif...\n");

  int Full = 0;
  int Won = 0;
  int player = 0;
  int Cchoisie = 0;


  while (!Full && !Won) {
    print();
    printf("Tour du joueur %d (%c)> ", player+1, tokens[player]);
    int ret = scanf("%d", &Cchoisie);
    if(ret != 1) {
      printf("Mauvaise saisie!\n");
      flushstdin();
    }
    else {
      Cchoisie--;
      if(Cchoisie < 0 || Cchoisie  >= 7) {
      printf("Mauvaise saisie");
      continue;
    }
    else {
      jeton(Cchoisie, player);
      player = !player;
    }
    }
  }
}
