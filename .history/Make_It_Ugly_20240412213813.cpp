int t;cin>>t;  
    while(t--){  
        int n;cin>>n;  
        vector<int> v;  
           map<int,int> ma;  
        for(int i=0;i<n;i++){  
            int x;cin>>x;  
            v.push_back(x);  
            ma[x]++;  
        }  
        if(ma.size()==1){  
            cout<<-1<<endl;  
            continue;  
        }  
        int x=v[0];  
        int ix=0;  
        int ans=n;  
  
        for(int i=0;i<n;i++){  
            if(v[i]==v[0]){  
                ix++;  
            }  
            else{  
                 
                ans=min(ans,ix);  
                ix=0;  
            }  
  
        }  
        ans=min(ans,ix);  
  
        cout<<ans<<endl;  
  
       
  
    }  
 
B