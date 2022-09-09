#include<iostream>
using namespace std;

int main()
{
    int i,j,n,x=1;

    cout<<"Enter number of lines: ";
    cin>>n;

    for (i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<"  "<<x++;
        }

        cout<<endl;
        
    }
    
return 0;

}