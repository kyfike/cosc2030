#include <iostream>
using namespace std; 
/* using = operator for memberwise assignment */
#include "Tree.h"

int main() {
  Tree ash;
  ash.setHeight(67.6);
  ash.setNumBranches(34);

  Tree ash2;
  ash2 = ash;

  // Are these the same object
  cout << "ash: " << endl;
  ash.displayTree();

  cout << "ash2: " << endl;
  ash2.displayTree();

  // In Java these would point to the same object
  cout << "*************************************************" << endl;

  // change one of the objects
  ash.setHeight(300.1);
  ash.setNumBranches(78);

  cout << "ash: " << endl;
  ash.displayTree();

  cout << "ash2: " << endl;
  ash2.displayTree(); 
  

}