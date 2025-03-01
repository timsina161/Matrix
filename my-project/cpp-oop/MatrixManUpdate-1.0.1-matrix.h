/*
Matrix Man -v-1.0.1-
--------------------------------------
Whats New?
    ->Matrix Multiplications
    ->Minor bug fixes
--------------------------------------

Next Version: -v-1.0.2-

++++++++++++++++++++++++++++++++++++++++++++++
What to expect
    ->Cramers Rule
    ->Bug fixes
+++++++++++++++++++++++++++++++++++++++++++++++

Author <Prasanna Timsina>
Email <pratimsina@gmail.com>
            OR
       <echinoderprasanna@gmail.com> 

=================================================

Feel free to contact me, and contributions from other fellow programmers are highly encouraged.

==================================================

Besar Softwares 2025



*/

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class matrix{

private:
    int rows,cols,i,j,k,rows1,cols1;
    char cmd[50];
    vector<vector<int>>matrixs,matrixs1,mulmat;
    void t_input()
    {
        cout<<"<Matrix-Man-> ";
        cin>>cmd;
    }
public:
    matrix(){
        rows =0;
        cols =0;
        rows1 = 0;
        cols1 = 0;
     }
    
    void start()
    {
        cout<< "Welcome to MM version 1.0 "<<endl<<"'startman' -> Input matrix"<<endl<<"'term' -> Terminate the program"<<endl<<"'addman' -> Add matrix"<<endl<<"'printman' -> Print the Matrix"<<"'mulman'->Multiply the matrix"<<endl<<endl;

        while(1)
        {
           t_input();
            if(strcmp(cmd,"startman") == 0)
            {
                input_matrix();

            }else if(strcmp(cmd,"printman")==0)
            {
                print_matrix();
            }
            else if(strcmp(cmd,"term")==0)
            {
                break;
            }else if(strcmp(cmd,"addman")==0)
            {
                add_matrix();
            }
            else if(strcmp(cmd,"mulman")==0)
            {
                multiply_matrix();
            }
            else{
                cout<<"Command not found"<<endl;
            }
        }
    }
    
    void input_matrix()
    {
        cout<<"Enter the number of rows: ";
        cin>>rows;
        cout<<"\nEnter the number of cols: ";
        cin>>cols;
        if(cols <= 1 && rows <=1 )
        {
            cout<<"Rows and cols must be greater than 1";
            input_matrix();
        }else{
            matrixs.resize(rows, vector<int>(cols));
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    cout<<"Enter your value in the position of the first matrix ["<<i<<"]["<<j<<"] => ";
                    cin>>matrixs[i][j];
                    
                }
            }
            cout<<endl;
            cout<<"Input rows for the second matrix ->";
            cin>>rows1;
            cout<<endl;
            cout<<"Input cols for the second matrix -> ";
            cin>>cols1;
            cout<<endl;
            matrixs1.resize(rows1, vector<int>(cols1));
            if(cols1<=1 && rows1<=1)
            {
                printf("Rows and cols must be greater than 1");
                input_matrix();
            }else{

            
                for(i=0;i<rows1;i++)
                {
                    for(j=0;j<cols1;j++)
                    {
                        cout<<"Enter your value in the position of the second matrix ["<<i<<"]["<<j<<"]=> ";
                        cin>>matrixs1[i][j];
                    }
                }
            }


        }


    }

    void print_matrix()
    {
        cout<<"First matrix"<<endl;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                cout<<matrixs[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Second matrix"<<endl;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                cout<<matrixs1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void add_matrix()
    {
        vector<vector<int>>addr;
        addr.resize(rows, vector<int>(cols));
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                addr[i][j] = matrixs[i][j] + matrixs1[i][j];
            }
        }
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                cout<<addr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void multiply_matrix()
    {

        int nr = rows,nc = cols1 ;
        mulmat.resize(nr, vector<int>(nc,0));
        if(cols == rows1)
        {
            for(i=0;i<nr;i++)
            {
                for(j=0;j<nc;j++)
                {
                    mulmat[i][j] = 0;
                }
            }
            for(i=0;i<nr;i++)
            {
                for(j=0;j<nc;j++)
                {
                    for(k=0;k<cols;k++)
                    {
                        mulmat[i][j] += matrixs[i][k] * matrixs1[k][j];
                    }
                    
                }
            }
            for(i=0;i<nr;i++)
            {
                for(j=0;j<nc;j++)
                {
                    cout<<mulmat[i][j]<<" ";
                }
                cout<<endl;
            }
        }

    }

};
