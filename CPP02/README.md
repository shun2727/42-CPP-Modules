_This project has been created as part of the 42 curriculum by syee for CPP02, it contains notes referenced thorughout the Making of this project_

# C++ Notes
## CPP02 related
From here on out, all classes must be designed in Orthodox Canonical Form which includes the following 4 funcitons:
- Default constructor

Copy constructorvs copt assignment operator are often mistaken for each ther but thislink breaks it down : https://www.geeksforgeeks.org/cpp/copy-constructor-vs-assignment-operator-in-c/


	`class()`
- Copy constructor - does a deep copy (used when a new object is created with an exsiting object)
	- https://www.geeksforgeeks.org/cpp/copy-constructor-in-cpp/
	
	
	`class (const cass& other)` 

- Copy assignment operator - frees old memory and copies new (also used when existing is assigned to exsiting object)
	- stackoverflow.com/questions/59364218/copy-assignment-operator-clarification
	`class& operator=(const class& other)`
	
- Destructor
	
	`~class`
## Orthodox canonical form 
KNowledge regarding this is extracted from : https://hackmd.io/@ChloeIsCoding/S1D-y80bll (it covers in dept about the copy constructor and operator copy)
- default implementation provided by the compiler provides shallow copy

### shallow copy 
from what i understand its whne you assign the values it references the previous data
- https://www.geeksforgeeks.org/blogs/difference-between-shallow-and-deep-copy-of-a-class/
I think it's more obvious in oop because variables come from a class which may be dynamicaly allocated, when we assign the values it might not occur to us. Whereas dueing c++ if we did something like assign a pointer to another variable its more obvious to us that by accessing the same variable with a free'd object, we'd be accessing somethng invalid

## constexpr
- constexpr is a C++ keyword (short for constant expression) that tells the compiler a variable, function, or constructor can be evaluated at compile time rather than runtime

## Two's complement
- to get a signed value, flip the value's binary bits and add 1 
https://www.youtube.com/watch?v=ZMsrZvBmQnU <- demonstrates it

## ex00 related
The subject requires me to read up on integers and floating point numbers, in which it suggests integers and floating point numbers have different characteristics. I will be touching upon fixed-point numbers. 

### Fixed point numbers
C++ has no fixed point numbers (i dont remember what is fixed opoint numbers)

### scalar types 
performance accuary , range  precision..?

### const behind functions
```
int getRawBita(void) const; 
```
its placed in a getter funciton and its an indicaiton that it will not change the values that were gotten from the getter 

### "Why can't i assign a default value for static const int using member initilization?"
- In C++, you usually cannot initialize a static const int inside the class body because static variables require a single, distinct memory location across your entire program. The class header only serves as a blueprint, not a physical location in memory.

### "what is static inside the class"
- static means "Shared Class-Wide"
- Inside the header file (.h), static tells the compiler: "This variable belongs to the class itself, not to individual objects." Every instance of the class shares this exact same variable. (obj a and obj b form class MyClass shares the same variable address)

##