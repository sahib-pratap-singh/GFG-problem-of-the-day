//Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/
class Solution {
  public:
    //Function to return maximum path product from any node in a tree.
    long long ans=1;
    long long result=1;
    void solve(Node* root){
        if(root==NULL){
            return;
        }
        ans*=root->data;
        //cout<<ans<<" ";
        if(root->left==NULL and root->right==NULL){
            result=max(result,ans);
            ans/=root->data;
            return;
        }
        solve(root->left);
        solve(root->right);
        ans/=root->data;
    }
    long long findMaxScore(Node* root)
    {
        if(root==NULL){
            return 0;
        }
        solve(root);
        return result;
    }
};