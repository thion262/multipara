#include "nodelib.h"
#include <iostream>
using namespace lmp;

int main(int argc, char** argv){
	
	set_root(1);
	int x = 2;
	push_back(root,x);
//	float y = 13.54f ;
//	insert_after(root,y);
	insert_multi({241,13,4,5,6,6000});
  std::cout << count(root) << "\n";
  print();
	quiksort(root);
	print();
}

