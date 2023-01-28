vector<int> postorderTraversal(TreeNode* root){
        vector<int>Ans;
        stack<TreeNode*>s;
        TreeNode* current=root;
        while(current!=NULL || !s.empty()){
            if(current!=NULL){
                s.push(current);
                current=current->left;
            }
            else{
                TreeNode* temp=s.top()->right;
                if(temp==NULL){
                    temp=s.top();
                    s.pop();
                    Ans.push_back(temp->val);
                    while(!s.empty() && temp==s.top()->right){
                        Ans.push_back(s.top()->val);
                        s.pop();
                    }
                }
                else{
                    current=temp;
                }
            }
        }
        return Ans;
    }
