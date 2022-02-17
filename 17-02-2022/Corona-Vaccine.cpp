
//Using extra space
class Solution{
private:
    int ans;
    
    void count(Node* root, unordered_map<Node*, int>& level) {
        if(!root) return;
        
        count(root->left, level);
        count(root->right, level);
        if(level[root->left] == -1 or level[root->right] == -1) {
            level[root] = 1;
            ans++;
        }
        else if(level[root->left] == 1 or level[root->right] == 1) {
            level[root] = 0;
        }
        else {
            level[root] = -1;
        }
    }
    
public:
    int supplyVaccine(Node* root){
        unordered_map<Node*, int> level;
        ans = 0;
        count(root, level);
        if(level[root] == -1) ans++;
        return ans;
    }
};

//Using recursion
class Solution
{
    int ans;

    int count(Node* node)
    {
        bool zero = false , two = false;
        if(node->left==NULL && node->right==NULL)
            return 0;
        
        if(node->left)
        {
            int value = count(node->left);
            if(value==0)
                zero = true;
            if(value==2)
                two = true;
        }
        
        if(node->right)
        {
            int value = count(node->right);
            if(value==0)
                zero = true;
            if(value==2)
                two = true;
        }
        
        if(zero==true)
        {
            ans++;
            return 2;
        }
        
        if(two==true)
        {
            return 1;
        }
        return 0; 
    }
public:
    int supplyVaccine(Node* root)
    {
        ans = 0;    
        int result = count(root);
        if(result == 0)
            return (ans + 1);
        return ans;
    }
};