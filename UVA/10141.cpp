#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);

    int n,p,count=0;
    string x;
    while(1)
    {
        cin>>n>>p;
        if(n==0 && p==0)
        {
            break;
        }
        count++;
        double price = 2000000000,pri;
        int req_met = -1,rm;
        string name,nam;

        for(int i=0;i<n;i++)
        {
            cin.ignore();
            getline(cin,x);
        }

        while(p--)
        {
            getline(cin,nam);
            scanf("%lf %d\n",&pri,&rm);
            if(rm>req_met)
            {
                name=nam;
                price = pri;
                req_met = rm;
            }
            else if(rm==req_met && pri<price)
            {
                name = nam;
                price = pri;
                req_met = rm;
            }
            for(int i=0;i<rm;i++)
            {
                getline(cin,x);
            }
        }
        if(count>1)
            cout<<endl;
        cout<<"RFP #"<<count<<endl;
        cout<<name<<endl;
    }
    return 0;
}
