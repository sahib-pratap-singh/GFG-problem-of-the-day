
// Sieve of Eratosthenes

class Solution{
public:
    int prime[100000]={0};
    void findPrime(){
        for(long long int i=3;i<100000;i+=2){
            prime[i]=1;
        }
        for(long long int i=3;i<100000;i+=2){
            if(prime[i]){
                for(long long int j=i*i;j<100000;j+=i){
                    prime[j]=0;
                }
            }
        }
        prime[2]=1;
        prime[1]=0;
    }
    vector<int> primeDivision(int n){
        findPrime();
        for(int i=2;i<n;i++){
            if(prime[i] and prime[n-i]){
                return {i,n-i};
            }
        }
        return {-1,-1};
    }
};