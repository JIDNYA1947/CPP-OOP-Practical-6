# CPP-OOP-Practical-6

## Aim
To implement different types of inheritance in C++ using a college management system.

## Program – College Management System

**File:** `Inheritance.cpp`

This program demonstrates:

- Single Inheritance
- Multilevel Inheritance
- Multiple Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

## Concepts Used

- Base and derived classes
- Public and virtual inheritance
- Reusability of code using inheritance
- Multiple base classes
- Multilevel class relationships
- Hybrid inheritance using a combination of inheritance types
- Object creation and member function calls

## Inheritance Diagrams

### 1. Single Inheritance

```text
    Person
       |
       v
    Student
```

### 2. Multilevel Inheritance

```text
    Person
       |
       v
    Student
       |
       v
    Monitor
```

### 3. Multiple Inheritance

```text
    Student       Teacher
        \           /
         \         /
          \       /
       TeachingAssistant
```

### 4. Hierarchical Inheritance

```text
         Student
         /      \
        v        v
    Monitor   SportsStudent
```

### 5. Hybrid Inheritance

```text
          Person
          /    \
         v      v
     Student  Teacher
         |       |
         v       |
      Monitor    |
          \      /
           v    v
    CollegeRepresentative
```


## Sample Input and Output

### Sample Input
```text
No input required
```

### Sample Output
```text
1. Single Inheritance
I am a person.
I am a student.

2. Multilevel Inheritance
I am a person.
I am a student.
I am a class monitor.

3. Multiple Inheritance
I am a student.
I am a teacher.
I am a teaching assistant.

4. Hierarchical Inheritance
I am a person.
I am a student.
I participate in sports.

5. Hybrid Inheritance
I am a person.
I am a student.
I am a class monitor.
I am a teacher.
I am a college representative.
```

## About

This practical demonstrates the five types of inheritance in C++ using a college management system. It explains how derived classes can reuse the functions of base classes and how different inheritance structures can be implemented in a single program.
