#include <cstdint>
#include <initializer_list>

namespace lmp{
extern struct node* root;
extern bool push_back(node* elem, int & content);

extern bool insert_after(node* elem, int & content);

extern bool insert_after(node* elem, float & content);

extern bool remove(node* elem);

extern std::size_t count (node* elem);

extern void print();

extern void set_root(int content);

void quiksort(node* root);

void insert_multi(std::initializer_list<int> args);

void first_element(node* root);

}
