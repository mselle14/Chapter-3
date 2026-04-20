//Marshon Sellers
#include <iostream>
using namespace std;

const int max_row = 3; // students
const int max_col = 4; // days

void read_attendance(int attendance[][max_col], int max_row);
void print_attendance(int attendance[][max_col], int max_row);
void student_summary(int attendance[][max_col], int max_row);
void worst_day(int attendance[][max_col], int max_row);

int main()
{
    int attendance[max_row][max_col];

    read_attendance(attendance, max_row);
    print_attendance(attendance, max_row);
    student_summary(attendance, max_row);
    worst_day(attendance, max_row);

    return 0;
}

void read_attendance(int attendance[][max_col], int max_row)
{
    cout << "Enter attendance (1 = Present, 0 = Absent)\n";
    for (int row = 0; row < max_row; row++)
    {
        cout << "Student " << row + 1 << ":\n";
        for (int col = 0; col < max_col; col++)
        {
            cout << "  Day " << col + 1 << ": ";
            cin >> attendance[row][col];
        }
    }
}

void print_attendance(int attendance[][max_col], int max_row)
{
    cout << "\nAttendance Table:\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int col = 0; col < max_col; col++)
        {
            cout << attendance[row][col] << "\t";
        }
        cout << endl;
    }
}

void student_summary(int attendance[][max_col], int max_row)
{
    for (int row = 0; row < max_row; row++)
    {
        int count = 0;
        for (int col = 0; col < max_col; col++)
        {
            if (attendance[row][col] == 1)
                count++;
        }
        cout << "Student " << row + 1 << " attended " << count << " days." << endl;
    }
}

void worst_day(int attendance[][max_col], int max_row)
{
    int min_present = max_row + 1;
    int day_index = 0;

    for (int col = 0; col < max_col; col++)
    {
        int daily_total = 0;
        for (int row = 0; row < max_row; row++)
        {
            daily_total += attendance[row][col];
        }
        if (daily_total < min_present)
        {
            min_present = daily_total;
            day_index = col;
        }
    }
    cout << "Worst attendance was on Day " << day_index + 1 << endl;
    << " (" << max_absences << " absences)\n";
}
