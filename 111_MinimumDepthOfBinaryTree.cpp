class Solution {
public:
    int minDepth(TreeNode* root) 
    {
        if(root==NULL) return 0;
        
        if(!root->left && !root->right) return 1;
        if(root->left && !root->right) return minDepth(root->left)+1;
        if(!root->left && root->right) return minDepth(root->right)+1;
        
        return min(minDepth(root->left)+1, minDepth(root->right)+1);
    }
};

/*
    283   ms, faster than 86.92% 
    144.8 MB,   less than 43.55% 
*/