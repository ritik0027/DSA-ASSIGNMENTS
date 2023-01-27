 void InorderpushInVector(TreeNode* root,vector<int>&Ans) {
        if(!root){
            return ;
        }
        InorderpushInVector(root->left,Ans);
        Ans.push_back(root->val);
        InorderpushInVector(root->right,Ans);
    }

    vector<int>inorderTraversal(TreeNode* root){
        vector<int>A;
        InorderpushInVector(root,A);
        return A;
    }
