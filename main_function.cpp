#include "std.h"

int main(){
    clear_screen();
    school_logo();
    //Student 1
    // cout<<"\n\n\033[31;43mPlease fill student detail\033[0m\n"<<endl;
    student_str s1;
    s1.set_std();
    //OO
    clear_screen();
    school_logo();
    cout<<"\n\nWe got these students information for registeration!\n"<<endl;
    //Student 2
    student_str s2("Haroon Khan",19,109,3.5);
    student_str s3("Saad Ahmad",23,110,3.5);
    
    //Displaying Currently Registered Student 
    clear_screen();
    cout<<"------- Currently Registered Students ------"<<endl;
    s1.get_detail();
    s2.get_detail();
    s3.get_detail();

    cout<<"---------------------------------------------"<<endl;
    prog_stop();
    clear_screen();
    cout<<"\033[32m--- Objects Delating please wait ---\033[0m\n"<<endl;
    return 0;
}