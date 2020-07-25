#include<bits/stdc++.h>
using namespace std;


// Time complexity O(Row*col)
template <typename T>
void rotate_matrix(T &matrix,bool clock_wise)
{
    int row = matrix[0].size();
    int col = matrix.size();

    // cout<<row<<" "<<col<<endl;

    // Transpose Matrix method
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    if(clock_wise)
    {
        //reverse row
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size()/2;j++)
            {
                swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }
    }
    else
    {
        //reverse col
        for(int i=0;i<matrix.size()/2;i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[matrix[0].size()-1-i][j]);
            }
        }
    }
}

// print 
template <typename T>
void print_matrix(T &matrix)
{
    for(int i=0;i<matrix[0].size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    vector<vector<int> > v;
    vector<int> tmp_v;

    int row,col;
    cout<<"Row : ";
    cin>>row;
    cout<<"Col : ";
    cin>>col;

    for(int i=0;i<row;i++)
    {   
        for(int j=0;j<col;j++)
        {
            int x;
            cin>>x;
            tmp_v.push_back(x);
        }
        v.push_back(tmp_v);
        tmp_v.clear();
    }

    
    cout<<"Before rotation : "<<endl;
    print_matrix(v);
    cout<<endl;

    rotate_matrix(v,1);
    cout<<"After Rotation: "<<endl;
    print_matrix(v);
    cout<<endl;

    return 0;
}
