class Solution {
public:    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->val != q->val) return false;
        
        if( isSameTree(p->left, q->left) == true ){
            if(isSameTree(p->right, q->right) == true)
            {
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }

        return false;
    }
};
//0~4ms, 10MB