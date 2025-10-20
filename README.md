# Mini School System
# Student Registration System - Documentation

## 📋 Project Overview

The **Student Registration System** is a C++ console application that manages student records for "Unique Grammar School". It demonstrates object-oriented programming principles with class implementation, constructors, destructors, and input validation.

## 🏗️ System Architecture

### File Structure
```
project/
├── main.cpp          # Main program logic
├── std.h            # Class declaration header
└── functions.cpp    # Method implementations & utilities
```

## 📁 Code Documentation

### 1. **Class: student_str** (`std.h`)

#### Attributes (Private)
- `std_name: string` - Student's full name
- `std_age: int` - Student's age (1-30)
- `std_rollno: int` - Roll number (101-200)
- `std_gpa: float` - GPA value (0.0-4.4)

#### Methods (Public)

**Constructors:**
```cpp
student_str();  // Default - initializes with "Unknown", 0, 0, 0.0
student_str(string nameInp, int ageInp, int rollInp, float gpaInp);
// Parametric - with user confirmation for predefined values
```

**Core Functions:**
- `set_std(): void` - Interactive input with validation
- `get_detail(): void` - Displays formatted student information
- `get_grade(float gpaInp): string` - Converts GPA to letter grade
- `~student_str(): void` - Destructor with deletion message

### 2. **Global Utility Functions** (`functions.cpp`)

**UI Utilities:**
- `clear_screen(): void` - Clears terminal using `system("clear")`
- `school_logo(): void` - Displays school header with colors
- `prog_stop(): void` - Pauses execution until Enter key
- `code_pause(): void` - Adds 2-second delay for visual effect

### 3. **Main Program Flow** (`main.cpp`)

```cpp
1. Initialize screen & display logo
2. Create student_str s1 (interactive input)
3. Create student_str s2, s3 (predefined with confirmation)
4. Display all registered students
5. Cleanup with destructor messages
```

## 🔄 Program Workflow

### Student Creation Process

**Interactive Creation (s1):**
1. Clear screen & show logo
2. Prompt for name, age, roll number, GPA
3. Validate inputs with range checking
4. Pause for user confirmation

**Predefined Creation (s2, s3):**
1. Display proposed student details
2. Ask user to confirm or modify
3. If modified, switch to interactive input

### Input Validation Rules
- **Age:** Must be between 1-30 years
- **Roll Number:** Must be between 101-200
- **GPA:** Must be between 0.0-4.4

### GPA Grading Scale
```cpp
3.7-4.4 = A     2.7-2.9 = B      1.7-1.9 = C
3.3-3.6 = A-    2.3-2.6 = B-     1.3-1.6 = C-  
3.0-3.2 = B+    2.0-2.2 = C+     1.0-1.2 = D
                Below 1.0 = F
```

## 🎨 User Interface Features

### Color Coding
- **Red** (`\033[31m`): Labels and important messages
- **Green** (`\033[32m`): Success messages and headers
- **Yellow** (`\033[33m`): Input prompts
- **Blue** (`\033[34m`): Instructions
- **Background colors** for emphasis

### Visual Elements
- Clear screen transitions between sections
- Formatted borders and separators
- Progressive object deletion messages
- Timed pauses for better readability

## 💾 Memory Management

### Object Lifecycle
1. **Construction:** Default or parametric initialization
2. **Usage:** Data storage and display operations
3. **Destruction:** Automatic cleanup with visual confirmation

### Destructor Behavior
```cpp
~student_str() {
    code_pause();  // 2-second delay
    cout << ">> Object of student name " << std_name << " deleted successfully";
}
```

## 🚀 Key Features

1. **Object-Oriented Design** - Encapsulated student data
2. **Input Validation** - Range checking for all inputs
3. **User-Friendly UI** - Colored output and clear navigation
4. **Flexible Construction** - Both interactive and predefined object creation
5. **Professional Display** - Formatted student information with grades
6. **Clean Resource Management** - Proper object destruction

## 📝 Usage Example

```cpp
// Interactive creation
student_str s1;
s1.set_std();

// Predefined creation (with user confirmation)
student_str s2("Haroon Khan", 19, 109, 3.5);

// Display all students
s1.get_detail();
s2.get_detail();
```

## 🔧 Technical Details

- **Language:** C++
- **Paradigm:** Object-Oriented Programming
- **Libraries:** iostream, thread, chrono
- **Platform:** Linux/Unix (uses `system("clear")`)

This system effectively demonstrates core OOP concepts while providing a practical student management solution with robust input handling and professional presentation.
