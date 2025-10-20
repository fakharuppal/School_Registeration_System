# Student Registration System Documentation

The Student Registration System is a C++ application that manages student records for any education institute. It demonstrates object-oriented programming principles with class implementation, constructors, destructors, and input validation.

## System Architecture

### File Structure
```
project/
├── main.cpp          # Main program logic
├── std.h            # Class declaration header
└── functions.cpp    # Method implementations & utilities
```

## Code Documentation

### **Class: student_str** (`std.h`)

#### Attributes (Private)
- `std_name: string` - Student's full name
- `std_age: int` - Student's age (1-30)
- `std_rollno: int` - Roll number (101-200)
- `std_gpa: float` - GPA value (0.0-4.4)

**Core Functions:**
- `set_std(): void` - Interactive input with validation
- `get_detail(): void` - Displays formatted student information
- `get_grade(float gpaInp): string` - Converts GPA to letter grade
- `~student_str(): void` - Destructor with deletion message

### **Global Utility Functions** (`functions.cpp`)

- `clear_screen(): void` - Clears terminal using `system("clear")`
- `school_logo(): void` - Displays school header with colors
- `prog_stop(): void` - Pauses execution until Enter key
- `code_pause(): void` - Adds 2-second delay for visual effect

### 3. **Main Program Flow** (`main.cpp`)
1. Initialize screen & display logo
2. Create student_str s1 (interactive input)
3. Create student_str s2, s3 (predefined with confirmation)
4. Display all registered students
5. Cleanup with destructor messages


## Features

1. **Object-Oriented Design** - Encapsulated student data
2. **Input Validation** - Range checking for all inputs
3. **User-Friendly UI** - Colored output and clear navigation
4. **Flexible Construction** - Both interactive and predefined object creation
5. **Professional Display** - Formatted student information with grades
6. **Clean Resource Management** - Proper object destruction

## Outputs:
<img width="718" height="385" alt="oop#1" src="https://github.com/user-attachments/assets/cd7d8ccf-cfd2-433b-a6bb-03771018e9ef" />

## UML Diagram:
<img width="284" height="372" alt="image" src="https://github.com/user-attachments/assets/a45a1351-48b1-467e-a737-eb0d598323b7" />


