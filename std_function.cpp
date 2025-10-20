#include "std.h"

//defaul constructor
student_str::student_str(){
    std_name="Unknown";
    std_age=0;
    std_rollno=0;
    std_gpa=0.0;
}
//Parametric constructor
student_str::student_str(string nameInp,int ageInp,int rollInp,float gpaInp){
    char usrInp;
    cout<<"------------------------------------------------"<<endl;
    cout<<nameInp<<" | Roll no#"<<rollInp<<" | Age: "<<ageInp<<" | GPA: "<<gpaInp<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"\033[31mPress 'y' to change or 'n' to continue: \033[0m";
    cin>>usrInp;
    if(usrInp=='n'){
        std_name=nameInp;
        std_age=ageInp;
        std_rollno=rollInp;
        std_gpa=gpaInp;
    }
    else if(usrInp=='y'){
        cin.ignore();
        set_std();
    }
}
//Setting values 
void student_str::set_std(){
        clear_screen();
        school_logo();
        cout<<"\033[33m\nStudent Name: \033[0m";
        getline(cin,std_name);
        //age validation check
        do{
            cout<<"\033[33mAge (between 1 to 30): \033[0m";
            cin>>std_age;
        }while(std_age>=1 && std_age>=30);
        //rollnumber validation check
        do{
            cout<<"\033[33mRoll No(between 101 to 200 is valid): \033[0m";
            cin>>std_rollno;
        }while(std_rollno<101 || std_rollno>200);
        //gpa validation check
        do{
            cout<<"\033[33mGPA (1.1 to 4.4): \033[0m";
            cin>>std_gpa;
        }while(std_gpa>=0.0 && std_gpa>=4.4);   
        prog_stop();
    }
//Displaying detail 
void student_str::get_detail(){
    cout<<"\n\033[1;31mName: \033[0m"<<std_name<<"\n\033[1;31mAge:\033[0m "<<std_age<<"\n\033[1;31mRoll no#:\033[0m DS"<<std_rollno<<"\n\033[1;31mGPA:\033[0m "<<std_gpa<<" | Grade "<<get_grade(std_gpa)<<endl;
}
//Grade Calculating
string student_str::get_grade(float gpaInp){
    if (gpaInp >= 3.7) return "A";
    else if (gpaInp >= 3.3) return "A-";
    else if (gpaInp >= 3.0) return "B+";
    else if (gpaInp >= 2.7) return "B";
    else if (gpaInp >= 2.3) return "B-";
    else if (gpaInp >= 2.0) return "C+";
    else if (gpaInp >= 1.7) return "C";
    else if (gpaInp >= 1.3) return "C-";
    else if (gpaInp >= 1.0) return "D";
    else return "F";
}
//Object Distroy 
student_str::~student_str(){
    code_pause();
    cout<<">> Object of student name \033[31m"<<std_name<<"\033[0m deleted successfuly"<<endl;
}

void clear_screen(){
    system("clear");
    system("cls");
}

void school_logo(){
    cout<<"-----------------------------"<<endl;
    cout<<"    \033[1;31mUnique Grammer School\033[0m    |"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"\033[32m>>>>Student Registeration<<<<\033[0m"<<endl;
}

void prog_stop(){
    cout<<"\n\033[34mPlease Press Enter to continue\033[0m";
    cin.get();
    cin.get();
}

void code_pause(){
    this_thread::sleep_for(chrono::seconds(2));
}
