#include <iostream>
using namespace std;

int totalAttendance(int classAttendance, int totalClasses);

int main()
{ int totalClasses, classAttendance;
    cout<<"Enter the total classes for your course: \n";
    cin>>totalClasses;
    cout<<"Enter the amount of classes you have attended; \n";
    cin>>classAttendance;
    int attendance = totalAttendance(classAttendance, totalClasses);
    cout<<"Attendance is "<<attendance<< "%: \n";
    if (attendance<85) {
      cout<<"You're not allowed to sit exams. \n";
      }   
    else {
      cout<<"You can sit the exams. \n";
    }
}
 
int totalAttendance(int classAttendance, int totalClasses)
{   int attendance;
    attendance = ((classAttendance * 100) / totalClasses);
    return attendance;
}

