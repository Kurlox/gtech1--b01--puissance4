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
  int p = 0;
  int Cchoisie = 0;

  while (!Full && !Won) {
    printf("Quel joueur commence, 1 ou 2 ?");
    scanf("%d", &p);
    printf("\nJoueur %d,", p );

    if (p = 1) {
      printf(" choississez la colonne dans laquelle mettre votre jeton : ");
      scanf("%d", &Cchoisie);
      printf("\nVous avec choisi la colonne %d", Cchoisie );
      for(int l=0;l<NBL;l) {
        for(int c=0;c<NBC;c) {
          tab[5][Cchoisie-1] = tokens[0];

        }
      }
    }

    else {
      printf(" choississez la colonne dans laquelle mettre votre jeton : ");
      scanf("%d", &Cchoisie);
      printf("\nVous avec choisi la colonne %d", Cchoisie );
      for(int l=0;l<NBL;l) {
        for(int c=0;c<NBC;c) {
          tab[l][Cchoisie-1] = tokens[1];


        }
      }
    }
  }

  return 0;
}
