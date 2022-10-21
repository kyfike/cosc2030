#include <iostream>
#include "Tree2.h"
/* A friend to a class is a function or class that is not a member of the class, but has access to the private members of the class. */
// encapsulation
// data hiding
using namespace std;

int main(){
    // cout << Tree::objectCount << endl;
    Tree maple, ash;
    maple.setNumBranches(4);
    ash.setNumBranches(6);
    // cout << maple.getObjectCount() << endl;
    maple.treePoem();
    cout << maple.objectCount;
}