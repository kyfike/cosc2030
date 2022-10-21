using namespace std;
//Tree class
class Tree
{
    private:
    // static int objectCount; //
    int numBranches;

public:
    static int objectCount; //

    // constructor
    Tree(){
        objectCount++;
    }
    int getObjectCount(){
        return objectCount;
    }
    int getNumBranches(){
        return numBranches;
    }
    void setNumBranches(int x){
        numBranches = x;
    }
    static void treePoem(){
        cout << "I think that I shall never see\nA poem lovely as a tree.\n";
    }
};

int Tree::objectCount = 0;