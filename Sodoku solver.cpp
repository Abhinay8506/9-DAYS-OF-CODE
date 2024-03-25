#include <bits/stdc++.h> 

bool ispossible(vector<vector<int>>& sudoku,int row, int col, int value)

{

    for(int i=0; i<9; ++i)

    {

        if(sudoku[row][i]==value)

        {

            return false;

        }

        if(sudoku[i][col]==value)

        {

            return false;

        }

        if(sudoku[3*(row/3)+i/3][3*(col/3)+i%3]==value)

        {

            return false;

        }

    }

    return true;

}

bool solve(vector<vector<int>>& sudoku)

{

    for(int i=0; i<9; i++)

    {

        for(int j=0; j<9; j++)

        {

            if(sudoku[i][j]==0)

            {

                for(int k=1; k<=9; k++)

                {

                    if(ispossible(sudoku,i,j,k))

                    {

                        sudoku[i][j]=k;

                        if(solve(sudoku))

                        {

                            return true;

                        }

                        else

                        {

                            sudoku[i][j]=0;

                        }

                    }

                }

                return false;

            }

        }

    }

    return true;

}

void solveSudoku(vector<vector<int>>& sudoku)

{

    // Write your code here

    // No need to print the final sudoku

    // Just fill the values in the given matrix

    solve(sudoku);

}
