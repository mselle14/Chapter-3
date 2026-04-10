//Marshon Sellers


#include <iostream> 

using namespace std;

const int max_row = 2;

const int max_col = 3;



void read_array(int marks[][max_col], int max_row)

{

    for (int i = 0; i < max_row; i++)

    {

        for (int j = 0; j < max_col; j++)

        {

            cin >> marks[i][j];

        }

    }

}



void print_array(int marks[][max_col], int max_row)

{

    for (int i = 0; i < max_row; i++)

    {

        for (int j = 0; j < max_col; j++)

        {

            cout << marks[i][j] << " ";

        }

        cout << endl;

    }

}



int main()

{

    int marks[max_row][max_col];



    read_array(marks, max_row);

    print_array(marks, max_row);



    return 0;

}