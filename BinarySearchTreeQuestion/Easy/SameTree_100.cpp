class Solution {
public:    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //this means checking if there exists nullptr in both two nodes
        //if one of them is null, check if both of them are nullptrs  (if(!node1||!node2))
        //if both are nullptrs, return true, if not, return false (return (node1==node2))
        //if none of them are null, continue to line 10
        if(!p||!q) return (p==q);
        
        if(p->val != q->val) return false;
        
        return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
    }
};
//0~4ms, 10.1MB