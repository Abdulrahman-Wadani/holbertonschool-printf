# holbertonschool-printf

# _printf Project

## Before starting the project, what are the requirements?
- All code files must end with a new line  
- A README.md file is required to explain the project  
- Global variables are not allowed  
- No more than 5 functions per file  
- A main.h header file must be created containing all function prototypes  
- Code must follow Betty style guidelines  
- Do not push a main.c file to the repository  

---

## What functions and libraries are we allowed to use?
Only the following functions and macros are allowed:

- write → used for output instead of printf  
- malloc → used to allocate memory  
- free → used to free allocated memory  

For variadic functions:

- va_list → stores the variable arguments  
- va_start → initializes the argument list  
- va_arg → retrieves each argument  
- va_end → ends the argument list  
- va_copy → copies the argument list if needed  

---

## What format specifiers are supported and what do they mean?

- %c → prints a single character  
- %s → prints a string  
- %% → prints a percent sign  

(Additional specifiers that may be implemented later:)
- %d / %i → integers  
- %u → unsigned integers  
- %o → octal numbers  
- %x / %X → hexadecimal numbers  
- %p → memory address  

---
<img width="420" height="414" alt="IMG_1722 (1)" src="https://github.com/user-attachments/assets/6750b48b-a419-4cf9-8b34-d9876c50edbf" />

## How can we approach and solve this project? 
- First, understand the problem and what _printf is supposed to do  
- Break the project into small tasks (handling characters, handling %, printing)  
- Discuss the idea with your team and agree on a clear plan  
- Write a simple logic before coding  
- Start implementing step by step  
- Test each part before moving to the next  
- Debug errors as soon as they appear  
- Work together and make sure both partners understand the solution  

---

## What is the purpose of this project?
This project is about creating a custom implementation of the printf function in C.  
The goal is to understand how formatted output works internally.

---

<img src="https://github.com/user-attachments/assets/0d9192ec-dea4-4edb-bacd-89b234f18672" width="350">

## How does the project idea work?
The original printf function uses special symbols inside a string (such as %s and %c) to format output.  
In this project, we recreated this concept in a simplified way.

---

## How does _printf work?
- The function reads the format string character by character  
- If the character is normal, it is printed directly  
- If the character is %, it indicates a special instruction  
- The next character determines the type of output  
- The corresponding value is retrieved from the arguments  
- The value is then printed  

---

## What are the steps of execution?
1. The function starts reading the format string  
2. It loops through each character  
3. Normal characters are printed directly  
4. When % is found, the next character is checked  
5. The type of data is identified  
6. The value is retrieved using va_arg  
7. The output is printed using write  
8. The number of printed characters is counted  
9. The total count is returned  

---

## What does the diagram represent?
### Title: How _printf Works  

### Description:
This diagram shows the steps of how _printf works. It reads the string, checks for %, handles the format, prints the values, and returns the total number of characters printed.

---

## What did we learn from this project?
- Understanding variadic functions  
- Handling different data types  
- Breaking down problems step by step  
- Working as a team
- 
-<img src="https://github.com/user-attachments/assets/7098032a-d937-4108-806c-d0b5a8ae4f55" width="350">

---

## What are the limitations of this project?
This is a simplified version of printf.  
It does not support:
- flags  
- width  
- precision  

---

## What is the conclusion?
This project helped us understand how printf works internally  
and improved our problem-solving and programming skills.

---

### Flow of Execution Diagram

This diagram illustrates the step-by-step process of how the _printf function works.

<img src="https://github.com/user-attachments/assets/c1ff593d-c149-440a-8ade-5fc335363088" width="400">

---


## Authors
- Sara Al-Buraidi  
- Abdulrahman Al-Wadani
- 
-<img src="https://github.com/user-attachments/assets/ac3a4421-d0f7-44a9-9fc7-1effdec31357" width="500">
