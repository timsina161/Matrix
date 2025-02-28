/*
Matrix Man -v-1.0-
--------------------------------------
Whats New?
    ->Costumizable dimenstions
    ->User friendly
    ->Minor bug fixes
--------------------------------------

Next Version: -v-1.0.1-

++++++++++++++++++++++++++++++++++++++++++++++
What to expect
    ->Matrix Multiplications
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
    int rows,cols,i,j;
    char cmd[50];
    vector<vector<int>>matrixs,matrixs1;
    void t_input()
    {
        cout<<"<Matrix-Man-> ";
        cin>>cmd;
    }
public:
    matrix(){
        rows =0;
        cols =0;
     }
    
    void start()
    {
        cout<< "Welcome to MM version 1.0 "<<endl<<"'startman' -> Input matrix"<<endl<<"'term' -> Terminate the program"<<endl<<"'addman' -> Add matrix"<<endl<<"'printman' -> Print the Matrix"<<endl;

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
            matrixs1.resize(rows, vector<int>(cols));
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    cout<<"Enter your value in the position of the second matrix ["<<i<<"]["<<j<<"]=> ";
                    cin>>matrixs1[i][j];
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
                cout<<matrixs[i][j];
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

};