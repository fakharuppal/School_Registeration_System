#include <iostream>
#include <thread>   // Additional library for sleep
#include <chrono>  // for seconds
using namespace std;


//Student Structure class
class student_str{
private:
    string std_name;
    int std_age, std_rollno;
    float std_gpa;   
public:
    //Default and Parametric Function
    student_str();
    student_str(string nameInp,int ageInp,int rollInp,float gpaInp);
    //---------------
    //Setter and Getter function
    void set_std();
    void get_detail();
    //---------------
    //Grade Calculation function
    string get_grade(float gpaInp);
    //object distory function
    ~student_str();

};

void clear_screen();
void school_logo();
void prog_stop();
void code_pause();