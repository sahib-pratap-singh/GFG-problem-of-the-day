//using priority queue
//memory limit exceeds at test case 10030
int kthDiff(int a[], int n, int k)
{
    priority_queue<int> pq;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cnt++;
            pq.push(abs(a[i]-a[j]));
            if(cnt>k){
                pq.pop();
            }
        }
    }
    int ans=0;
    return pq.top();
}

//Using binary search and sliding window
int kthDiff(int a[], int n, int k)
{
    sort(a,a+n);
    int start=0;
    int end=a[n-1]-a[0];
    while(start<end){
        int mid=start+(end-start)/2;
        int cnt=0;
        for(int i=0,j=0;i<n;i++){
            while(j<n and a[j]<=a[i]+mid) j++;
            cnt+=j-i-1;
            
        }
        if(cnt<k){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}