#include <iostream>
using namespace std;
int main()
{
        
    int n , q;
    int **a;
    cin>>n>>q;
    int k = 0;
    int *i , *j;
    
    a = new int *[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a[i] = new int[k];
        for(int j = 0;j<k;j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    i = new int [q];
    j = new int [q];
    for(int m=0;m<q;m++)
    {
        cin>>i[m];
        cin>>j[m];
        cout<<a[i[m]][j[m]]<<endl;
    }
    
    
    return 0;
}