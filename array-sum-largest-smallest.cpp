// #include<bits/stdc++.h> we should not use this header file as its not a good practice and the code becomes unporatble

#include<iostream>
#include<limits.h>
using namespace std;
int main ()
{
    int n,i,a[50],s=0;
    int l= INT_MIN;//basically think of it like l is -infinity
    cout<<"\n Enter the number of terms u wanna have in the array : \n";
    cin>>n;

    cout<<"Enter " << n << " number of terms \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"\n The array is as follows\n";
for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

// We can also initialize the l and s variables with a[0] and we wont have to use limites INT_MIN or INT_MAX
  // The largst in array    
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    cout<<"The largest is :"<<l;

    //smallest in array
    for(i=0;i<n;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
        }
    }
    cout<<"\nThe smallest is :"<<l;


    cout<<" \n The sum of array is:";
    for(i=0;i<n;i++)
    {
        s+=a[i];//sum=sum+a[i] {for looping addition}
    }
    cout<<s;
    return 0;
}
