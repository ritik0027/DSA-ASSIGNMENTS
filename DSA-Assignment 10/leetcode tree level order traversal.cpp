vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>Ans;
        queue<TreeNode*>q;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            vector<int>A;
            int size=q.size();
            while(size--){
                TreeNode* temp=q.front();
                A.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                q.pop();
            }
            Ans.push_back(A);
        }
        return Ans;
    }
