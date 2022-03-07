class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* mergeTwoLists(Node* l1, Node* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l2->data<=l1->data){
            swap(l1,l2);
        }
        Node* res = l1;
        while(l1!=NULL and l2!=NULL){
            Node* temp = NULL;
            while(l1 and l1->data<=l2->data){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
    Node * mergeKLists(Node *arr[], int k)
    {
           if(k<2){
               return arr[0];
           }
           Node* root=mergeTwoLists(arr[0],arr[1]);
           for(int i=2;i<k;i++){
               root=mergeTwoLists(root,arr[i]);
           }
           return root;
    }
};