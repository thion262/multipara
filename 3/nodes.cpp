#include <cstdint>
#include <iostream>
#include <cmath>
#include "nodelib.h"
#include <stddef.h>




using namespace std;
namespace lmp{



    void Node::setContent(int input) {content=input;};
    void Node::setNext(Node* iNext){next=iNext;};
    void Node::setPrev(Node* iPrev){next=iPrev;};
    int Node::getContent() {return content;};
    Node* Node::Next() {return next;};
    Node* Node::Prev(){return prev;};

/*
class NodeList {
  
  Node* head;
  Node* tail;
  public:
    NodeList::NodeList() {head=NULL; tail=NULL;};

*/
    // Print this crap
    void NodeList::Print(){
      if(head == NULL){
        cout << "Cannot give you what I don't have, add something to print first... (Empty List)\n";
      }
      else{
        cout << "doing printing and stuff\n";
        Node* elem = head;
        while(elem != nullptr){
          cout <<" " << elem->getContent() << ",";
          elem = elem->Next();
        }
      }
    };
    
    // add new node
    void NodeList::PushBack(int data){
      if (head == NULL && tail == NULL){
        cout << "Adding completely new uebernode\n";
        head= new Node(data);
//        head->setContent(data);
        tail= head;
      }
      if (head == tail && head != nullptr && tail != nullptr){
        tail= new Node(data);
      }
      else { // everything louder than everyting... adding "regularly and stuff"
        Node * elem = new Node(data); // set up new node
        tail->setNext(elem); //set node after tail on new node, as we are adding this on the back
        elem->setPrev(tail); // set new node prev to old tail
        tail=elem; // set new node as new tail
      }
    };
    
//    void InsertAfter(Node* elem, int content);
//    void Delete(Node* elem);
      
//};


}
     
