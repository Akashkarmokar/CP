/*
    Problem Solved By  Akash Karmokar Adi
            Department Of Computer Science and Engineering
            Metropolitan University,Sylhet,Bangladesh.
*/
// Problem solved By : Deque STL (Standard Temple Libray from C++ library ) .

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case, n, m;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        cin >> n >> m;
        deque<int> deq;
        string input;
        int inp;
        cout<<"Case "<<i<<":"<<endl;
        while (m--)
        {
            cin >> input;
            if (input == "pushLeft")
            {
                cin>>inp;
                if (deq.size() >= n)
                {
                    cout << "The queue is full" << endl;
                }
                else
                {
                    deq.push_front(inp);
                    cout << "Pushed in left: " << inp << endl;
                }
            }
            else if (input == "pushRight")
            {
                cin>>inp;
                if (deq.size() >= n)
                {
                    cout << "The queue is full" << endl;
                }
                else
                {
                    deq.push_back(inp);
                    cout << "Pushed in right: " << inp << endl;
                }
            }
            else if (input == "popLeft")
            {
                if (deq.size() == 0)
                {
                    cout << "The queue is empty" << endl;
                }
                else
                {   
                    int left = deq.front();
                    deq.pop_front();
                    cout<<"Popped from left: "<<left<<endl;
                }
            }
            else
            {
                if (deq.size() == 0)
                {
                    cout << "The queue is empty" << endl;
                }
                else
                {
                    int right = deq.back();
                    deq.pop_back();
                    cout<<"Popped from right: "<<right<<endl;
                }
            }
        }
        deq.clear();
    }
    return 0;
}