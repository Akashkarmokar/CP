#include<iostream>
using namespace std ;

#define Max 5000000
int phi[Max+2];
unsigned long long sum[Max+2];

void totient()
{
    phi[1] = 1 ;
    int factor_ase = 0 ;
    for(int i = 2 ;i<=Max ; i++)
    {
        if(phi[i]==0)
        {
            phi[i] =  i - 1 ;
            for(int j = i * 2 ;j<=Max ;j+=i)
            {
                if(phi[j]==0)
                {
                    phi[j] = j ;
                }
                factor_ase = phi[j]/i ;
                phi[j] = phi[j] - factor_ase ;
            }
        }
    }
}
void calculate()
{   
    sum[1]= 1 ;
    for(int i = 2 ; i<=Max ;i++)
    {
        sum[i] = phi[i];
        sum[i]*= phi[i];
        sum[i] += sum[i-1];
    }
}
int main()
{

    totient();
    calculate();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t_c;
    cin>>t_c;
    int a, b;
    for(int i = 1 ; i<=t_c ;i++)
    {
        cin>>a>>b;
        cout<<"Case "<<i<<": ";
        cout<<sum[b]-sum[a-1]<<endl;
    }
    return 0;
}
