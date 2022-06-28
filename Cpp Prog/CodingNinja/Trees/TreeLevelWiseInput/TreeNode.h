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

        /**
         * @brief Destroy the Tree Node object
         *
         */
        ~TreeNode () {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
};

/*
    vector <TreeNode * > children will assume that whatever the type we send for template T same type
    will be used to create the vector children automatically
*/

