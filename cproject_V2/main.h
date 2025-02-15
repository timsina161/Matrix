#include <iostream>
using namespace std;
class matrix{
    public:
        int mat[2][2];
        int mat1[2][2];
        
        void start_matrix()
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<"Enter first matrix  ["<<i<<"]["<<j<<"] => ";
                    cin>>mat[i][j];
                }
            }
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<"Enter second matrix  ["<<i<<"]["<<j<<"] => ";
                    cin>>mat1[i][j];
                }
            }
        }
        void print_matrix()
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            cout<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<mat1[i][j];
                }
                cout<<endl;
            }
        }

        void add_matrix()
        {
            int sum_matrix[2][2];

            for(int i=0;i<2;i++)
            {
                for(int j =0;j<2;j++)
                {
                    sum_matrix[i][j] = mat[i][j] + mat1[i][j];
                }
            }
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<sum_matrix[i][j];
                }
                cout<<endl;
            }
        }
        
    

};

