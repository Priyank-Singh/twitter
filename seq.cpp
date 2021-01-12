    #include<bits/stdc++.h>
    using namespace std;
    #define int long long int
    #define m_p make_pair
    #define pb push_back 
    #define ppb pop_back
    #define f first
    #define s second
    #define pii pair<int,int>
    #define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define double long double
    const double pi=3.14159265358979;
    const int mod=1e9+7;
     
    int takemod(int a,int m = mod)
    {
      return ((a%m)+m)%m;
    }
    int power(int  b, int  p)
    {
      if(p==0)return 1;
      else if(p%2==0)
      {
          int q=power(b,p/2);
          return ((q)*(q));
      }
      else return ((b)*(power(b,p-1)));
    }
    int powerm(int  b, int  p,int mod = mod)
    {
      if(p==0)return 1;
      else if(p%2==0)
      {
          int q=powerm(b,p/2)%mod;
          return ((q%mod)*(q%mod))%mod;
      }
      else return ((b%mod)*(powerm(b,p-1)%mod))%mod;
    }
     
    bool isprime(int n)
    {
      if(n==1)return false;
      if(n==2 or n==3)return true; 
      int  lim=sqrt(n); 
      int  i=2;
      while(i<=lim)
      {
          if(n%i==0)return false; 
          i++;
      }
      return true;
    }
    vector< int > factors( int  n)
    {
      vector< int > a;
      a.pb(1);
      int  lim=sqrt(n);
      int i=2;
      while(i<=lim)
      {
          if(n%i==0)
          {
              a.pb(i);
              if(i!=n/i)a.pb(n/i);
          }
          i++;
      }
     
      if(n!=1)a.pb(n);
      //sort(a.begin(),a.end());
      return a;
    }
    vector<pii> pf_with_count(int  b)
    { 
      pii p;
      vector<pii>pf;
      int  count=0;
      while(b%2==0)
      {
        b/=2;
        count++;
      }
      if(count>0)
      {
        p.f=2;
        p.s=count;
        pf.pb(p);
      }
      int i=3;
      while(i<=sqrt(b))
      {
            count=0;
            while(b%i==0)
            {
                b/=i;
                count++;
            }
            if(count>0)
            {
                p.f=i;
                p.s=count;
                pf.pb(p);
            }
            i+=2;
      }
      if(b>2) 
      {
          p.f=b;
          p.s=1;
          pf.pb(p);
      } 
      sort(pf.begin(),pf.end());
      return pf;
    }
    int  bs_t_i(string s)
    {
      int  l=strtoull(s.c_str(),NULL,2);
      return l;
    }
    string  i_to_bs(int  n)
    {
      string s = bitset< 9 >( n ).to_string();
      return s;
    }
    int s_t_i(string s)
    {
      stringstream obj(s); 
      int x = 0; 
      obj >> x; 
      return x;
    }           
    //sons of  anarchy, top boy , end of the fucking world, the crown, ..
 
    void sol()
    { 
       

    }  
      
    signed main()
      {
             ios;
             int t = 1;
            // cin >> t;
             while(t--)sol();
      }
