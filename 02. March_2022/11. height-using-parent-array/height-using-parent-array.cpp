class Solution{
public:
    int findHeight(int N, int arr[]){
        int h=1, a=arr[N-1];
        while(arr[a]!=-1){
            a=arr[a];
            h++;
        }
        return h+1;
    }
};