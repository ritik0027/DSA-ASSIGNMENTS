void preorderinserting(TreeNode* root,vector<int>&A){
         if(!root){
             return;
         }
         A.push_back(root->val);
         preorderinserting(root->left,A);
         preorderinserting(root->right,A);
     }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>Ans;
        preorderinserting(root,Ans);
        return Ans;
    }
