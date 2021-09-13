class Solution {
public:
    //recursive solution
    vector<int> result = {};
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root==nullptr) return {};
        if(root->left!=nullptr) inorderTraversal(root->left);
        result.push_back(root->val);
        if(root->right!=nullptr) inorderTraversal(root->right);
        
        return result;
    }
    //0ms, 9.6MB

    //iterative, stack solution
    /*
    stack<TreeNode*> stacker;
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        while(true)
        {
            if(root!=nullptr)
            {
                stacker.push(root);
                root = root->left;
            }else{
                if(stacker.empty()) break;
                
                root = stacker.top();
                stacker.pop();
                result.push_back(root->val);
                root = root->right;
            }
        }
        
        return result;
    }
    //0ms, 8.2MB
    */
};