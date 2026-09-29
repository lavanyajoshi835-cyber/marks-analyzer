#include <iostream>
using namespace std;

int main() {
    int n;
    float marks, sum = 0, highest, lowest;
    int passed = 0, failed = 0;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks of " << n << " students:\n";

    for (int i = 1; i <= n; i++) {
        cout << "Student " << i << ": ";
        cin >> marks;

        sum += marks;

        if (i == 1) {
            highest = lowest = marks;
        } else {
            if (marks > highest)
                highest = marks;

            if (marks < lowest)
                lowest = marks;
        }

        if (marks >= 40)
            passed++;
        else
            failed++;
    }

    float average = sum / n;

    cout << "\n----- Student Marks Analysis -----\n";
    cout << "Average Marks: " << average << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
    cout << "Passed Students: " << passed << endl;
    cout << "Failed Students: " << failed << endl;

    return 0;
}