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

int init(void) {
  for(int l=0;l<NBL;l++) {
    for(int c=0;c<NBC;c++) {
      tab[l][c] = '.';
    }
  }
}
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
void jeton(int colonne, int player) {
  for(int l=NBL;l>=0;l--) {
    if(tab[l][colonne] == '.') {
      tab[l][colonne] = tokens[player];
      break;
    }
    else {
      continue;
    }
  }
}

void main(void) {
  init();
  printf("Welcome to Puissance4!\n");

  int Full = 0;
  int Won = 0;
  int player = 0;
  int Cchoisie = 0;


  while (!Full && !Won) {
    print();
    printf("Tour du joueur %d (%c)> ", player, tokens[player]);
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
