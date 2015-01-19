#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;


void print1(int* a){
    cout << "Sizo of a is " <<sizeof(a) << "\n";

  for (int i=0;i < (sizeof(a));++i){
    cout << *a << " | ";
    ++a;
  }
  cout << " finished. \n";
  return;
}

void print2(int a[]){
    cout << "Sizo of a is " <<sizeof(a) << "\n"; 

  for(int i=0;i<(sizeof(a));++i){
    cout << a[i] << " | ";
  }
  cout << "finished \n";
}

void print3(int a[20]){

  cout << "Sizo of a is " <<sizeof(a) << "\n"; 
  for(int i=0;i<30;++i){ // hier kann mehr ausgegeben werden als definiert ist.
    cout << a[i] << " | ";
  }
  cout << "finished \n";
}


void print4(int (&d)[10] ){
  cout << "Sizo of a is " <<sizeof(d) << "\n"; // 40? falscher Output/.

  for (int i = 0; i < sizeof(d)/sizeof(int); ++i){
    cout << d[i] << " | ";
  }
  cout << "finished \n";

}


int main(){


  int b[] ={1,2,3,4,5};

  int c[30] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int d[10] = {1,2,3,4,5,6,7,8,9,10};

  print1(b);
  print2(b);
  print3(c);
  print4(d);
}
