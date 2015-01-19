#include "nodelib.h"
#include <string.h>

using namespace lmp;

int main(int argc, char **argv){
  NodeList x; // = new NodeList();
  x.Print();
  x.PushBack(4);
  x.PushBack(3);
  x.PushBack(2);
  x.PushBack(1);
  x.Print();
  return 0;
};

