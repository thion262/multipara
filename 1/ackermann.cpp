#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;


int main(){
  int n;
  int m;
  std::string input= "";
  int ackermann(int a,int b);

while(true){
  std::cout << "Ackermann schreiben Sie den ersten Parameter!" << std::endl;
  std::getline(std::cin,input);
  std::stringstream myStream(input);
   if (myStream >> n)
     break;
   std::cerr << "Invalid number, please try again" << std::endl;
}
while(true){
  std::cout << "Ackermann schreiben Sie den zweiten Parameter!" << std::endl;
  std::getline(std::cin,input);
  std::stringstream myStream(input); 
  if (myStream >> n)
     break;
   std::cerr << "Invalid number, please try again" << std::endl;
}

  int a = ackermann(n,m);   
  std::cout << a << std::endl;
  return 0;
}


int ackermann (int m, int n){

//	printf("ackermann (m=%d,n=%d\n)", m,n);
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


