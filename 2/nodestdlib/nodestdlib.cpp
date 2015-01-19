#include <cstdint>
#include <iostream>
#include <cmath>
#include <math.h>
#include <list>

using namespace std;

namespace lmp{



std::list<int> integer_list;
list<int>::iterator iterator_name;

// add new node with content &data 
bool push_back(int  content){
  integer_list.push_back(content);	
	return true;
}

// new node for floats
bool push_back(float content){
  integer_list.push_back(lround(content));
  return true;
}


/* insert after specific node
bool insert_after(int & element, int & content){
  integer_list.insert(integer_list.endl(),content );
	return true;
}
*/

void print(){
for(std::list<int>::iterator list_iter = integer_list.begin(); 
    list_iter != integer_list.end(); list_iter++)
{
    std::cout<<*list_iter<<endl;
}
}

void sort(){
	integer_list.sort();
}

}
