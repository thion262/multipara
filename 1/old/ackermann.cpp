#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
int main(int argc, char** argv){



  int n;
  int m;
  int ackermann(int a,int b);
  std::cout << "Ackermann schreiben Sie!" << std::endl;
  if (argc==3){
    m = atoi(argv[1]),n = atoi(argv[2]);
    printf("m=%d,n=%d\n", m, n);
  }else {
    fputs("Bitte 2 Argumente mit Angeben!", stderr);
  return 0;
  }

  ackermann(n,m);
  return 0;
}


  int ackermann (int m, int n){

	printf("ackermann (m=%d,n=%d\n)", m,n);
	if(m == 0){
	  return ++n;
	} 
	else if (m > 0 && n == 0){
   	  return ackermann(--m , 1);
	} 
	else if (m > 0 , n > 0){
 	  return ackermann(--m,ackermann(m,--n));
	}
  }   


