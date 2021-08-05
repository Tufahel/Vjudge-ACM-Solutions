/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
using namespace std;
#define sz 18409202
#define sz1 100002
#define sc scanf
#define pf printf
#define ll long long
bool isPrime[sz];
int bs[sz];

/*void sieve()
{
    for(ll i=0; i<sz; i++)
        isPrime[i]=true;
    isPrime[0]=false;
    isPrime[1]=false;
    for(ll i=2; i<sz; i++)
    {
        if(isPrime[i])
        {
            for(ll j=i+i; j<sz; j+=i)
                isPrime[j]=false;
        }
    }
}*/
ll binSearch(ll arr[], ll capacity, ll item)
{
    ll beg=0;
    ll ennd=capacity-1;
    ll mid;
    while(beg<=ennd){
        mid=(beg+ennd)/2;
        if(arr[mid]==item)
            return mid+1;
        else if(arr[mid]<item)
            beg=mid+1;
        else
            ennd=mid-1;
    }
    return -1;
}
ll arr[sz1],num[sz1],qr[sz1];
int main()
{
    ll n,m;
    cin>>n>>m;
    //map<ll,ll>qury;
    vector<ll>qury;
    vector<ll>::iterator it;
    ll x=0;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(n/i==i)
                arr[x++]=i;
            else{
                arr[x++]=i;
                arr[x++]=n/i;
            }
        }
    }
    ll y=0;
    for(ll i=1; i*i<=m; i++){
        if(m%i==0){
            if(m/i==i)
                num[y++]=i;
            else{
                num[y++]=i;
                num[y++]=m/i;
            }
        }
    }
    sort(arr,arr+x);
    sort(num,num+y);
    ll bs;
    for(ll i=0; i<x; i++){
        bs=binSearch(num,y,arr[i]);
        if(bs!=-1){
            qury.push_back(arr[i]);
        }
    }
    ll z=qury.size();
    /*sort(qr,qr+z);
    for(ll i=0; i<z; i++){
        cout<<qury[i]<<endl;
    }
    cout<<endl;
    for(ll i=0; i<x; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(ll i=0; i<y; i++){
        cout<<num[i]<<endl;
    }*/
    ll q;
    cin>>q;
    ll low,high,ans;
    for(ll i=0; i<q; i++){
        cin>>low>>high;
        it=upper_bound(qury.begin(),qury.end(),high);
        it--;
        if(*it>=low)
            cout<<*it<<endl;
        else
            cout<<-1<<endl;
    }
}
