 vector<int>inorderTraversal(TreeNode* root){
        vector<int>Ans;
        stack<TreeNode*>s;
        TreeNode* current=root;
        while(current!=NULL || !s.empty()){
            if(current!=NULL){
                s.push(current);
                current=current->left;
            }
            else{
                current=s.top();
                s.pop();
                Ans.push_back(current->val);
                current=current->right;
            }
        }
        return Ans;
    }
