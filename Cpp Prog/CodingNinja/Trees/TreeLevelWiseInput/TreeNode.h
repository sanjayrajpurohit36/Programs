#include<vector>
using namespace std;

template <typename T>
class TreeNode {
    public:
        T data;
        vector<TreeNode *> children;

        // default constructor
        TreeNode(T data) {
            this->data = data;
        }
};

/*
    vector <TreeNode * > children will assume that whatever the type we send for template T same type
    will be used to create the vector children automatically
*/

