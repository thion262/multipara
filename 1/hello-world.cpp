#include <iostream>

int main(int argc, char* argv[]){
  std::string name;
//  std::cin >> name;
  if(argc > 1){
    name = argv[1];
  }

  std::cout << "Hello "+ name + "!" << std::endl;
  return 0;
}
