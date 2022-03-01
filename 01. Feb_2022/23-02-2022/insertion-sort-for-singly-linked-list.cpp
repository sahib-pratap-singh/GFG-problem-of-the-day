class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        //code here
        Node* node=head;
        while(node!=NULL){
            Node* cur=head;
            while(cur!=node){
                if(cur->data>node->data){
                    swap(cur->data,node->data);
                }
                cur=cur->next;
            }
            node=node->next;
        }
        return head;
    }
    
};