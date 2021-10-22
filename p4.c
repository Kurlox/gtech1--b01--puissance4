#include <stdio.h>
#include <stdbool.h>

#define NBL 6
#define NBC 7
char tab[NBL][NBC];
char tokens[] = "ox";

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

int main(void) {
  init();
  printf("Welcome to Puissance4!\n");
  print();

  int Full = 0;
  int Won = 0;
  int player = 0;
  int Cchoisie = 0;


//  printf("Quel joueur commence, 1 ou 2 ?");
//  scanf("%d", &player);
 // printf("\nJoueur %d,", player );

  while (!Full && !Won) {
    printf("Tour du joueur %d (%c)> ", player, tokens[player]);
    //  printf(" choisissez la colonne dans laquelle mettre votre jeton : ");
    int ret = scanf("%d", &Cchoisie);
    if(ret != 1) {
      printf("Mauvaise saisie!\n");
      void flushstdin() {
        int c;
        while((c = getchar()) != '\n' && c != EOF);
      }
      continue;
    }

    player = !player;
  }
  return 0;
}
