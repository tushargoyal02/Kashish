#include <iostream>

using namespace std;

int main()
{
    

    int n;
    cin>>n;
    int a[n];
    int i=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum;
    

    return 0;

}

