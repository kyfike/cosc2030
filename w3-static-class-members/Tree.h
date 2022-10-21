// Tree class
#ifndef TREE_H
#define TREE_H
using namespace std;

class Tree
{
private:
  double height;   
  int numBranches; 
  double *branchLengths;  // array of lengths of branches
  
public:
   // Constructor
  Tree()
    { height = 0; numBranches = 0; }

  ~Tree() { delete [] branchLengths; }

  void setNumBranches(int b){ numBranches = b; }

  void setHeight(double h){ height = h; }

  int getNumBranches() { return numBranches; }

  double getHeight() { return height; }

  void displayTree(){ cout << "height is " << height << " and numBranches is " << numBranches << endl; }

};

#endif