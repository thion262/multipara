#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

/*
int changep(int a, int b){
	int c;
  c = a;
	a = b;
	b = c;
	
	return 0;
}
*/

int changea(int *a, int *b){
  int c = *a;
  *a = *b;
  *b = c;

   return 0;
}


int print(int a, int b){
    printf("a:%i,b:%i\n", a,b);
  return 0;
}


int main(int argc, char** argv){

  int a;
  int b;  

  if (argc==3){
    a = atoi(argv[1]);
    b = atoi(argv[2]);
  }
  else{
    return -1;
  }
  print(a,b);
  changea(&a,&b);
  print(a,b);
}
