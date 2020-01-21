// A Prog. to construct an array of XORs of 
//all elements except given index elemenet
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void constXorarray(ll a[], ll n) 
{  
    ll Xor = 0; 
    for (ll i = 0; i < n; i++) 
        Xor &= a[i]; 
  
      for (ll i = 0; i < n; i++) 
        a[i] = Xor & a[i]; 
} 
//Driver Code
int main() 
{ 
	ll n;
    cout << "Enter the number of elements in array:\n";
    cin >> n;
    ll arr[n];
    cout << "Enter the elements of the array:\n";
    for(ll i=0;i<n;i++)
    	cin >> arr[i]; 
    constXorarray(arr, n); 
    cout << "Required array is:\n";
    for (ll i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 