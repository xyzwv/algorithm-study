#include <bits/stdc++.h>
using namespace std;

int main() {
    double gpa=0, creditCount=0, credit, gradeNum;
    string course, grade;
    map<string, double> m = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, 
    {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};
    
    for(int i=0; i<20; i++){
        cin >> course >> credit >> grade;
        if(grade == "P") continue;
        
        gpa += credit * m.at(grade);
        creditCount += credit;
    }
    cout << gpa/creditCount;
    
    return 0;
}