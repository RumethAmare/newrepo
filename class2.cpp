#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    float average;
public:
    void getmarks(int no) {
        marks = no;
    }
    float getavg() {
        return (float)marks;
    }
};

int main() {
    Student s;
    s.getmarks(80);
    cout << "Student's average: " << s.getavg() << endl;
    return 0;
}
