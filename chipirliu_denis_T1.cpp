#include <iostream>
using namespace std;
int main()
{
    int L[100],V[100];
    int n;
    cin>>n;
    for (int a=0;a<n;a++)
    {
        cout<<"V["<<a+1<<"]=";
        cin>>V[a];
        }
    for(int i=n-2;i>=0;i--)
    {
        int maxim=0;
        for(int j=i+1;j<=n-1;j=j+1)
        {
            if((L[j]>=maxim) && (V[j]>=V[i]))
               {
                  L[i]=1+maxim;
               }
        }

    }





}
