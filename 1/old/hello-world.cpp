#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

  char custom[] = "";
  std::cout << "Hello World!" << std::endl;
  if (argc==2){
    strcpy (custom,argv[1]);
  }else {
  scanf("%s",custom);
  }

  printf ("%s\n", custom);
  return 0;
}


