#include "nodelib.h"

using namespace lmp;

int main(int argc, char** argv){
	
	set_root(1);
	int x = 2;
	push_back(root,x);
	print();
	float y = 13.54f ;
	insert_after(root,y);
	print();
	print();
	insert_multi({4,5,6,7});
	print();
	quiksort(root);
	print();
}

