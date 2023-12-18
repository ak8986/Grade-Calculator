#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int numSubjects = 5;  // You can change this based on the number of subjects in your semester
    double grades[numSubjects];
    double totalGrade = 0.0;

    // Input grades for each subject
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter grade for Subject " << i + 1 << ": ";
        cin >> grades[i];

        // Validate input (assuming grades are between 0 and 100)
        while (grades[i] < 0 || grades[i] > 100) {
            cout << "Invalid input! Grade must be between 0 and 100. Enter again: ";
            cin >> grades[i];
        }

        totalGrade += grades[i];
    }

    // Calculate average grade
    double averageGrade = totalGrade / numSubjects;

    // Display the results
    cout << fixed << setprecision(2);  // Set precision for displaying grades
    cout << "\nSubject-wise Grades:\n";
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Subject " << i + 1 << ": " << grades[i] << endl;
    }

    cout << "\nAverage Grade: " << averageGrade << endl;

    // Assign letter grade based on average (you can customize this based on your grading scale)
    char letterGrade;
    if (averageGrade >= 90) {
        letterGrade = 'A';
    } else if (averageGrade >= 80) {
        letterGrade = 'B';
    } else if (averageGrade >= 70) {
        letterGrade = 'C';
    } else if (averageGrade >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    cout << "Overall Semester Grade: " << letterGrade << endl;

    return 0;
}
