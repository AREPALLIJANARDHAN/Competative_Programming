 void solve()
    {
        ll n;
        cin>>n;
        ll k=0;
        ll j=0;
        ll p=0;
        for (int i = 1; i < n; ++i)
        {
            j=gcd(n,i);
            j+=i;
            if(j>k)
            {
                k=j;
                p=i;
            }
        }
        cout<<p<<nline;
    }
 
     
    int main() {
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
        fastio();
        // code begins here:
        ll t;
        cin>>t;
        while(t--)
            solve();
 
        
    }