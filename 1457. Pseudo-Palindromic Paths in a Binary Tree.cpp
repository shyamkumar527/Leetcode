//POTD 24-1
int c;
void vsk(TreeNode* root,vector<int>& vis,int odd){
    if(root==NULL) return;
    vis[root->val]++;
    if(root->left==NULL and root->right==NULL){
        for(int i=1;i<=9;i++){
            if(vis[i]%2==1) odd++;
        }
        if(odd<2) c++;
    }
    vsk(root->left,vis,odd,even);
    vsk(root->right,vis,odd,even);
    vis[root->val]--;
}
int pseudoPalindromicPaths (TreeNode* root) {
    c=0;
    vector<int> vis(10,0);
    vsk(root,vis,0);
    return c;
}
