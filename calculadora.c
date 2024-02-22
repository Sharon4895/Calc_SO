#import <stdio.h>

int main ()
{
  int selecc=0;
  printf (" CALCULADORA ");
  printf ( " Selecciona una opcion: ");
  scanf("%i",&selecc);
  printf ("\n1. SUMA");
  printf ("\n2. RESTA");
  printf ("\n3. MULTIPLICACION");
  printf ("\n4. DIVISION");

  switch(selecc){
    case(1):
      suma();
      break;
    case(2):
      resta();
      break;
    case(3):
      mult();
      break;
    case(4):
      div();
      break;
  }
}
