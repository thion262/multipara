#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv){



  int n;
  char m[]="";
  int berechnung(int x,char* y);

  if (argc==3){
    strcpy (m,argv[1]);
    n = atoi(argv[2]);
  }else {
    fputs("Bitte 2 Argumente mit Angeben!", stderr);
  return 0;
  }
  berechnung(n,m);
  return 0;
}


int berechnung(int a, char* b){

  if(strcmp(b,"sin")){
    printf("Ergebnis: %f\n", sin(a));
  }
  return 0;
}

