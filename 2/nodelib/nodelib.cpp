#include <cstdint>
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

namespace lmp{

struct node{
	node* prev = nullptr;
	node* next = nullptr;
	int content = 0;
	node(node* prev, node* next, int content):prev(prev), next(next), content(content){}
	node():prev(nullptr),next(nullptr),content(0){}
};

struct node* root;
node* first_element(node* elem);
node* last_element(node* elem);


// add new node with content &data 
bool push_back(node* elem, int & content){
	elem = last_element(elem);
	node* blubb = new node (elem,nullptr,content);
	elem->next = blubb;
	return true;
}

// new node for floats
bool push_back(node* elem, float & content){
  elem = last_element(elem);
  node* blubb = new node (elem,nullptr,std::lround(content));
  elem->next=blubb;
  return true;
}


// insert after specific node
bool insert_after(node* elem, int & content){
	node* blubb = new node (elem,elem->next,content);
	if(elem->next!=nullptr){
		elem->next->prev =blubb;
	}
	elem->next = blubb;
	return true;
}

bool insert_after(node* elem, float & content){
	int cont2  =(int) std::lround(content);
	node* blubb = new node (elem,elem->next,cont2);
	if(elem->next!=nullptr){
		elem->next->prev =blubb;
	}
	elem->next = blubb;
	return true;
}



// removes elem
bool remove(node* elem){
	elem->prev->next = elem->next;
	elem->next->prev = elem->prev;
	delete elem;

	return true;
}



// counts all nodes
std::size_t count (node* elem){
	elem = first_element(elem);
	size_t i = 0;

	// case of list len = 1...
	if (elem->prev == nullptr && elem->next==nullptr){
		i=1;
		return i;
	}

	// inc counter for root elem.
	if(elem->prev==nullptr){
		++i;
	}

	while(elem->next != last_element(elem)){
		++i;
		elem=elem->next;
	}
	++i;
	return i; // +1 for last elem.
}



// last element of list
node* last_element(node* elem){
	while (elem->next!=nullptr){
		elem = elem->next;	
	}
	return elem;
}

// first element of list
node* first_element(node* elem){
	while(elem->prev != nullptr){
		elem = elem->prev;
	}
	return elem;
}


void print(){
  cout << "Printing... \n";
	node* elem =root;
	if(elem==nullptr){
		return;
	}
	if (elem->prev==nullptr && elem->next==nullptr){
		cout<<"OnlyRootnode, content: "<< elem->content << endl;
	}
	while(elem!= nullptr){
		cout<<"current : "<< elem<<" prev: "<< elem->prev <<" next: "<< elem->next <<" content: "<< elem->content <<endl;
		elem = elem->next;
	}

}

void set_root(int content){	
	root = new node (nullptr,nullptr,content);
}

/*
int compar(const void *a, const void *b){
	int c = (int)(((node*)a)->content);
	int d = (int)(((node*)b)->content);
	if (*(int*)a < *(int*)b ){
		cout<< c <<"<"<< d <<endl;
  	return -1;
	}
	if (*(int*)a == *(int*)b ){
		cout<< c <<"="<< d <<endl;
		return  0;
	}
	if (*(int*)a > *(int*)b ){
		cout<< c << ">"<< d <<endl;
  	return  1;
	}
}
*/

int compar (const void * a, const void * b)
{

  cout <<"Comparing node "<< "at address=" << (node*)a << ", value="<< ((node*)a)->content << " with node at address " << (node*)b <<", value="<< ((node*)b)->content << endl;
  return ( ((node*)a)->content - ((node*)b)->content );
}


void quiksort(node* root){

	std::qsort((void*)root,8,16,compar);
}


void insert_multi(initializer_list<int> args){
	initializer_list<int>::iterator it;

	for (it=args.begin(); it!=args.end();++it){
		int a= *it;
		push_back(root, a);
	}
	return;
}


}
