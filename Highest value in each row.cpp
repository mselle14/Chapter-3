//Marshon Sellers
#include <iostream>
using namespace std;

int main()
{
    const int STUDENTS = 3;
    const int SUBJECTS = 4;
    int marks[STUDENTS][SUBJECTS];

    for (int row = 0; row < STUDENTS; row++)
    {
        for (int col = 0; col < SUBJECTS; col++)
        {
            cin >> marks[row][col];
        }
    }

    for (int row = 0; row < STUDENTS; row++)
    {
        int max_value = marks[row][0];
        for (int col = 1; col < SUBJECTS; col++)
        {
            if (marks[row][col] > max_value)
            {
                max_value = marks[row][col];
            }
        }
        cout << "Student " << (row + 1) << " highest = " << max_value << endl;
    }

    return 0;
}
