#include <stdio.h>

void suma();
void resta();
void mult();
void divi();

int main ()
{
  int selecc=0;
  printf (" CALCULADORA ");
  printf ("\nSelecciona una opcion: ");
  printf ("\n1. SUMA");
  printf ("\n2. RESTA");
  printf ("\n3. MULTIPLICACION");
  printf ("\n4. DIVISION\nSeleccion: ");
  scanf("%i",&selecc);

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
      divi();
      break;
  }
}

void suma(){
    float n1,n2,res;
      printf ("Introduza el primer numero a sumar: ");
      scanf ("%f" , &n1);
      printf ( "Introduza el segundo numero a sumar: ");
      scanf ("%f" , &n2);
      res= n1+n2;
      printf ("La suma es: %f" ,res);
}     

void resta (){
float n1,n2,res;
     printf ("Introduza el primer numero: ");
      scanf ("%f" , &n1);
      printf ( "Introduza el segundo numero a restar: ");
      scanf ("%f" , &n2);
      res= n1-n2;
      printf ("La resta es: %f" , res); 
 
}
void mult(){
  float n1,n2,res;
  printf("\nIngresa el primer valor: ");
  scanf("%f",&n1);
  printf("\nIngresa el segundo valor: ");
  scanf("%f",&n2);
  res=n1*n2;
  printf("\nResultado: %f",res);
}

void divi(){
  float n1,n2,res;
  printf("\nIngresa el primer valor: ");
  scanf("%f",&n1);
  printf("\nIngresa el segundo valor: ");
  scanf("%f",&n2);
  res=n1/n2;
  printf("\nResultado: %f",res);
}
