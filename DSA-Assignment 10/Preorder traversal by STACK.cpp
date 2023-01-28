  vector<int> preorderTraversal(TreeNode* root) {
        vector<int>Ans;
        if(root==NULL){
            return Ans;
        }
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode*temp=s.top();
            s.pop();
            Ans.push_back(temp->val);
            if(temp->left){
                s.push(temp->left);
                temp->left=NULL;
            }
            if(temp->right){
                s.push(temp->right);
                temp->right=NULL;
            }
        }
        return Ans;
    }
