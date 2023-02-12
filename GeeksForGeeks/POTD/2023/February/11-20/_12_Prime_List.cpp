class Solution{
public:
    bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int solve(int n)
{
    
    if(n==1 || n==2)
        return 2;
    int cur=n;
    int prev=n-1;
    int next=n+1;
    if(isprime(n)) 
        return n;
    while(prev>0 || next<INT_MAX)
    {
        if(prev>0 && isprime(prev))
          return prev;
          
         if(isprime(next))
            return next;
        
        prev--;
        next++;
    }
    
}
Node *primeList(Node *head){
         Node *temp=head;
         while(temp!=NULL)
         {
            int n=temp->val;
            int num=solve(n);
            temp->val=num;
            temp=temp->next;
         }
         return head;  
    }
};
