#include <iostream>
using namespace std;

struct data
{
    float om1, om2, om3;
    int no_of_subjects;
    float obtainedMarks[6];
    int creditHours[6];
    float QualityPoints[6];
    float total_quality_points = 0;
    float total_credit_hours = 0;
    float GPA;
} students;
class DataInput
{

    string name;
    string regNo;
    char semester;

public:
    void getData(); // This Function will Input Data From the User
};
class QP
{
    float quality_points[33] = {16, 15.67, 15.33, 15, 14.67, 14.33, 14, 13.67, 13.33, 13, 12.67, 12.33, 12, 11.67, 11.33, 11, 10.67, 10.33, 10, 9.67, 9.33, 9, 8.67, 8.33, 8, 7.5, 7, 6.5, 6, 5.5, 5, 4.5, 4};
    float CH4(float om);       // This function will calculate the quality points of the Subjects with 4 Credit Hours
    float CH2(float om);       // This function will calculate the quality points of the Subjects with 2 Credit Hours
    float CH3(float om);       // This function will calculate the quality points of the Subjects with 3 Credit Hours
    void TotalQualityPoints(); // This function will make total of all the Quality points of the subjects.
    void TotalCreditHours();   // This fuction will make total of all the credit hours of the Subjects.
    void GPA();                // This Fuction will Calculate the GPA of Current Semester
public:
    void chkData(); // This function will check the data and will take descions accordingly.
};

int main()
{
    char c;
    do
    {
        DataInput student; // Declaration of the object of the class "DataInput"
        QP Student;        // Declaration of the object of the class "QP"
        student.getData();
        Student.chkData();
        cout<<"You want to check another? Enter 'y' ";
        cin>>c;
    }while((c=='y'||c=='Y'));

    return 0;
}
void DataInput::getData()
{
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Registration No: ";
    getline(cin, regNo);
    cout << "Which is Your Semester? ";
    cin >> semester;
    cout << "How many subjects did you study in Semester No " << semester << "? Enter: ";
    cin >> students.no_of_subjects;
    cout << endl;
    cout << "Enter the obtained Marks and Credit Hours of all the subjects accordingly! " << endl
         << endl;
    for (int i = 0; i < students.no_of_subjects; i++)
    {
        cout << "Subject " << i + 1 << " Credit Hours: ";
        cin >> students.creditHours[i];
        cout << "Subject " << i + 1 << " Obtained Marks: ";
        cin >> students.obtainedMarks[i];
    }
}
void QP::chkData()

{
    for (int i = 0; i < students.no_of_subjects; i++)
    {
        if (students.creditHours[i] == 4)
        {
            students.om1 = students.obtainedMarks[i];
            students.om1 = CH4(students.om1);
            students.QualityPoints[i] = students.om1;
        }
        else if (students.creditHours[i] == 2)
        {
            students.om2 = students.obtainedMarks[i];
            students.om2 = CH2(students.om2);
            students.QualityPoints[i] = students.om2;
        }
        else if (students.creditHours[i] == 3)
        {
            students.om3 = students.obtainedMarks[i];
            students.om3 = CH3(students.om3);
            students.QualityPoints[i] = students.om3;
        }
    }
    TotalQualityPoints();
    TotalCreditHours();
    GPA();
}
float QP::CH4(float om)
{
    int i = 0; // counter for the loop
    int a1 = 64;
    while (i <= 32)
    {
        if ((om >= a1 && om <= 80))
        {
            om = quality_points[i];
        }
        else

            if (om == a1)
        {
            om = quality_points[i];
        }
        a1--;
        i++;
    }
    return om;
}
float QP::CH2(float om)
{

    float quality_points[17] = {8, 7.67, 7.33, 7, 6.67, 6.33, 6, 5.67, 5.33, 5, 4.67, 4.33, 4, 3.5, 3, 2.5, 2};
    int i = 0; // counter for the loop
    int a1 = 32;
    while (i <= 16)
    {
        if ((om >= a1 && om <= 40))
        {
            om = quality_points[i];
        }
        else
        {
            if (om == a1)
            {
                om = quality_points[i];
            }
        }
        a1--;
        i++;
    }
    return om;
}
float QP::CH3(float om)
{
    float quality_points[25] = {12, 11.67, 11.33, 11, 10.67, 10.33, 10, 9.67, 9.33, 9, 8.67, 8.33, 8, 7.67, 7.33, 7, 6.67, 6.33, 6, 5.5, 5, 4.5, 4, 3.5, 3};
    int a1 = 48;
    int i = 0; // Counter for the loop
    while (i <= 25)
    {
        if ((om >= a1 && om <= 60))
        {
            om = quality_points[i];
        }
        else
        {
            if (om == a1)
            {
                om = quality_points[i];
            }
        }
        a1--;
        i++;
    }
    return om;
}
void QP::TotalQualityPoints()
{
    for (int i = 0; i < students.no_of_subjects; i++)
    {
        students.total_quality_points = students.QualityPoints[i] + students.total_quality_points;
    }
}
void QP::TotalCreditHours()
{
    for (int i = 0; i < students.no_of_subjects; i++)
    {
        students.total_credit_hours = students.creditHours[i] + students.total_credit_hours;
    }
}
void QP::GPA()
{
    students.GPA = students.total_quality_points / students.total_credit_hours;
    cout << "GPA: " << students.GPA << endl;
}