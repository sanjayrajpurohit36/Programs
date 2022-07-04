#include<iostream>

template <typename T>
class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode* left;
        BinaryTreeNode* right;

        // default constructor
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        /**
         * @brief Destroy the Binary Tree Node object
         *
         */
        ~BinaryTreeNode() {
            delete left;
            delete right;
        }
};
