#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll>  pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define line "\n"
ll getRandInRange(ll mn, ll mx){
	return rand()%(mx-mn+1) + mn ;
}
ll getRandInRange(pll p){
	return getRandInRange(p.first, p.second);
}
ll getRandUpto(ll mx){
	return getRandInRange(0, mx);
}

template <typename T, typename U> U getRandomArrayElement(T x){
	return x[getRandInRange({0, x.size()-1})];
}
template <typename T, typename U, typename V> V getRandomValueFromRangeVector(T x){
	U oneRange = x[getRandInRange({0, x.size()-1})];
	V randValue = getRandInRange(oneRange);
	return randValue;
}

vector<ll> getArray(int n, pll vp, bool negatives){
	vector<ll> v(n, 0);
	for(int i=0;i<n;i++){
		v[i] = getRandInRange(vp);
		if(negatives && rand()%2 == 0)
			v[i] = -v[i];
	}
	return v;
}
vector<ll> getArray(int n, pll vp){
	return getArray(n, vp, false);
}

string upperCharSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string lowerCharSet = "abcdefghijklmnopqrstuvwxyz";
string digits = "0123456789";
string alphabet = upperCharSet + lowerCharSet;
string alnum = alphabet + digits;

string getString(int n, string &lowerCharSet){
	string ans(n, ' ');
	for(int i = 0; i < n; i++)
		ans[i] = lowerCharSet[getRandInRange({0, lowerCharSet.size()-1})];
	return ans;
}

int main()
{
	ll t=1000;
	cout<<t<<"\n";
	for(int i=0;i<t;i++)
	{
		ll n=getRandInRange({1,100});
		ll m=getRandInRange({1,100});
		ll k=getRandInRange({1,100});
		cout<<n<<" "<<m<<" "<<k<<"\n";
		vector<int>a;
		for(int i=0;i<n;i++)         
		{
			int x=getRandInRange({0,1});
			a.push_back(x);
		}
		for(auto x:a)
		cout<<x<<" ";
		cout<<"\n";
	}
    return 0;
}