# Object-Oriented Programming (C++) - Lab Coursework

A modular collection of C++ programs developed for the Object-Oriented Programming (OOP) laboratory curriculum. This repository demonstrates core language fundamentals, object-oriented concepts, member functions, constructors & destructors, friend functions, static members, and inheritance hierarchies.

---

## Student Information

| Field | Information |
| :--- | :--- |
| **Student Name** | [Enter Your Name] |
| **Roll Number** | [Enter Roll Number] |
| **USN / SRN** | [Enter USN / SRN] |
| **Branch / Department** | Computer Science & Engineering / IT |
| **Semester** | [Enter Semester] |
| **Course Title** | Object-Oriented Programming in C++ |

---

## Directory Structure

```text
cpp_oop_coursework/
│
├── 01_Basics_and_Syntax/
│   ├── calculate_rect_area.cpp
│   ├── check_palindrome_str.cpp
│   ├── find_maximum_element.cpp
│   ├── measure_string_len.cpp
│   ├── pointer_parameter_demo.cpp
│   ├── primitive_datatypes.cpp
│   ├── reference_parameter_demo.cpp
│   ├── sum_two_numbers.cpp
│   └── value_parameter_demo.cpp
│
├── 02_Classes_and_Objects/
│   ├── outside_class_method.cpp
│   ├── rectangle_box_model.cpp
│   ├── rect_area_with_return.cpp
│   ├── simple_student_class.cpp
│   └── student_record_mgmt.cpp
│
├── 03_Constructors_and_Methods/
│   ├── add_complex_numbers.cpp
│   ├── default_employee_info.cpp
│   ├── metric_distance_calc.cpp
│   ├── overloaded_constructors.cpp
│   ├── time_duration_sum.cpp
│   └── types_of_constructors.cpp
│
├── 04_Destructors_and_Static/
│   ├── auto_increment_staff_id.cpp
│   ├── lifecycle_destructor_demo.cpp
│   └── shared_static_variable.cpp
│
├── 05_Friend_and_Static_Functions/
│   ├── bridge_friend_classes.cpp
│   ├── friend_func_basic.cpp
│   ├── friend_func_two_objects.cpp
│   └── static_method_usage.cpp
│
├── 06_Inheritance_Basics/
│   ├── access_specifier_modes.cpp
│   ├── person_student_hierarchy.cpp
│   └── single_level_inheritance.cpp
│
└── 07_Multilevel_and_Access_Specifiers/
    ├── automotive_multilevel_model.cpp
    ├── multilevel_org_hierarchy.cpp
    └── protected_inheritance_demo.cpp
```

---

## Program Index & Concept Mapping

### 1. Basics and Syntax (`01_Basics_and_Syntax`)
| Filename | Description / Purpose |
| :--- | :--- |
| `check_palindrome_str.cpp` | Two-pointer algorithm to test string symmetry / palindrome. |
| `sum_two_numbers.cpp` | Console input handling using `cin` and arithmetic summation. |
| `find_maximum_element.cpp` | Array/vector traversal to find the maximum value. |
| `pointer_parameter_demo.cpp` | Passing function parameters by pointer / address. |
| `reference_parameter_demo.cpp` | Passing function arguments using C++ reference aliases (`&`). |
| `value_parameter_demo.cpp` | Demonstrating call-by-value with independent variable copies. |
| `calculate_rect_area.cpp` | Basic geometric calculation from user dimensions. |
| `measure_string_len.cpp` | Evaluating length using both `std::string` and `strlen()`. |
| `primitive_datatypes.cpp` | Declaration and formatted display of C++ data types. |

### 2. Classes and Objects (`02_Classes_and_Objects`)
| Filename | Description / Purpose |
| :--- | :--- |
| `simple_student_class.cpp` | Basic encapsulation with private data members and public getters/setters. |
| `outside_class_method.cpp` | Defining member functions outside class scope using the `::` operator. |
| `rect_area_with_return.cpp` | Member function computing and returning numeric area values. |
| `rectangle_box_model.cpp` | Geometric encapsulation computing both area and perimeter. |
| `student_record_mgmt.cpp` | Modeling student profiles with formatted scorecard display. |

### 3. Constructors and Methods (`03_Constructors_and_Methods`)
| Filename | Description / Purpose |
| :--- | :--- |
| `add_complex_numbers.cpp` | Object addition and complex number representation. |
| `overloaded_constructors.cpp` | Default, single-parameter, and multi-parameter constructor overloading. |
| `types_of_constructors.cpp` | Demonstration of Default, Parameterized, and Copy Constructors. |
| `metric_distance_calc.cpp` | Constructor logic performing automatic metric unit conversion. |
| `default_employee_info.cpp` | Default constructor initializing default employee records. |
| `time_duration_sum.cpp` | Adding two time duration objects with minute rollover calculation. |

### 4. Destructors and Static Members (`04_Destructors_and_Static`)
| Filename | Description / Purpose |
| :--- | :--- |
| `lifecycle_destructor_demo.cpp` | Tracking object creation and destruction order across nested scopes. |
| `auto_increment_staff_id.cpp` | Generating auto-incremented IDs using a class-level static sequence. |
| `shared_static_variable.cpp` | Shared static counter tracking active object instances in memory. |

### 5. Friend and Static Functions (`05_Friend_and_Static_Functions`)
| Filename | Description / Purpose |
| :--- | :--- |
| `friend_func_basic.cpp` | Accessing private class members via an external friend function. |
| `friend_func_two_objects.cpp` | Friend function operating on two separate instances of the same class. |
| `bridge_friend_classes.cpp` | Friend function accessing private members across two distinct classes. |
| `static_method_usage.cpp` | Invoking static member functions directly via `ClassName::method()`. |

### 6. Inheritance Basics (`06_Inheritance_Basics`)
| Filename | Description / Purpose |
| :--- | :--- |
| `access_specifier_modes.cpp` | Examining `public`, `protected`, and `private` member visibility. |
| `person_student_hierarchy.cpp` | Multilevel derivation: `Individual` -> `CollegeStudent` -> `EngineeringScholar`. |
| `single_level_inheritance.cpp` | Single-level derivation extending `BaseDevice` to `SmartPhone`. |

### 7. Multilevel and Access Specifiers (`07_Multilevel_and_Access_Specifiers`)
| Filename | Description / Purpose |
| :--- | :--- |
| `multilevel_org_hierarchy.cpp` | Organizational hierarchy modeling: `PersonEntity` -> `CorporateEmployee` -> `ProjectLead`. |
| `protected_inheritance_demo.cpp` | Demonstration of protected member access propagation across multiple levels. |
| `automotive_multilevel_model.cpp` | Vehicle hierarchy: `MotorVehicle` -> `PassengerSedan` -> `PerformanceSportSedan`. |

---

## How to Compile and Run

Each program is self-contained and can be compiled using any modern C++ compiler (such as MinGW `g++` or Clang).

### Using `g++` on Windows / Linux:
```bash
# Example: Compiling and running from the project root
g++ "01_Basics_and_Syntax/check_palindrome_str.cpp" -o test_prog
./test_prog
```

### Batch Syntax Verification:
```bash
# On Windows PowerShell:
Get-ChildItem -Recurse -Filter *.cpp | ForEach-Object { g++ -fsyntax-only $_.FullName }
```
