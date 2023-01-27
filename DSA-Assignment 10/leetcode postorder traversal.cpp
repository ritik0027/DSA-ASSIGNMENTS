void postorderinserting(TreeNode* root,vector<int>&Ans) {
            if(!root){
                return ;
            }
            postorderinserting(root->left,Ans);
            postorderinserting(root->right,Ans);
            Ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>A;
        postorderinserting(root,A);
        return A;
    }
