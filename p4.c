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
  printf("-------------\n");
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

  int Cchoisie = 0;

  
  printf("Choississez la colonne dans laquelle mettre votre jeton : ");
  scanf("%d", &Cchoisie);
  printf("Vous avec choisi la colonne %d", Cchoisie );
  


  return 0;

}
