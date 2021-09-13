class Solution {
public:
    stack<int> stack;
    bool compare(TreeNode* node1, TreeNode* node2)
    {
        if(!node1||!node2) return (node1==node2);
        
        if(node1->val != node2->val) return false;
        return compare(node1->left, node2->right)&&compare(node1->right,node2->left);  
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        
        return compare(root->left, root->right);
    }
};

//4~8ms, 16.6MB