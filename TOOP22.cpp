#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class grades {
    double grade1, grade2, grade3;
    public:
    void set_values(double, double, double);
    double gradeAverage() {return (grade1+grade2+grade3)/3;};
};

void grades::set_values(double x, double y, double z){
    grade1 = x;
    grade2 = y;
    grade3 = z;
}

int main(){
    grades Cadet1, Cadet2;
    Cadet1.set_values(85,90,70);
    Cadet2.set_values(90,100,84);
    cout << "Cadet1 grade average is: " << Cadet1.gradeAverage() << endl;
    cout << "Cadet2 grade average is: " << Cadet2.gradeAverage() << endl;
    return 0;
}