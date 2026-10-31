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
- The subject requires me to read up on integers and floating point numbers, in which it suggests integers and floating point numbers have different characteristics. I will be touching upon fixed-point numbers. 

### Fixed point numbers
- C++ has no fixed point numbers (i dont remember what is fixed opoint numbers)

### scalar types 
- performance accuary , range  precision..?

### const behind functions
```
	int getRawBits(void) const; 
```
- its placed in a getter funciton and its an indicaiton that it will not change the values that were gotten from the getter 

### "Why can't i assign a default value for static const int using member initilization?"
- In C++, you usually cannot initialize a static const int inside the class body because static variables require a single, distinct memory location across your entire program. The class header only serves as a blueprint, not a physical location in memory.

### "what is static inside the class"
- static means "Shared Class-Wide"
- Inside the header file (.h), static tells the compiler: "This variable belongs to the class itself, not to individual objects." Every instance of the class shares this exact same variable. (obj a and obj b form class MyClass shares the same variable address)

## ex01 related 
- https://hackmd.io/@ChloeIsCoding/Bk8gPG1Mxx

### floating point vs double
- https://www.geeksforgeeks.org/cpp/difference-float-double-c-cpp/
the more crucial thing to note :
- double is more precise (up to 15 digit precistion), but takes up more space (8 bytes) , denoted as %lf
- float is less precise (up to 15 digit precistion), and takes up lesser space (4 bytes), denoted as %f

Minor conclusion double is a better float

### fixed point vs floating point
- https://stackoverflow.com/questions/7524838/fixed-point-vs-floating-point-number

### printing out floating point with more decimal points with cout
- By default, cout displays up to 6 significant digits total and automatically drops trailing zeros. Combining fixed and setprecision forces it to count digits after the decimal point and pads empty places with zeros
- using set pricision : https://www.tutorialspoint.com/article/printing-the-correct-number-of-decimal-points-with-cout-in-cplusplus
``` c++
int main() {
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Setting the precision to 12 decimal places
    cout << setprecision(13);

    // Printing the two variables
    cout << "Double Type Number  = " << a << endl;
    cout << "Float Type Number   = " << b << endl;

    return 0;
}
```


### float and double 
- We must add the suffix f or F at the end of a float value. This is because the compiler interprets decimal values without the suffix as double.
- https://www.programiz.com/cpp-programming/float-double

### what are fracitonal bits
- https://stackoverflow.com/questions/36660171/understanding-fixed-point-fractional-part

### bitshifting 
- can only be done with int values
```c++
int main(void)
{
	int x = 128; //(int has 4 bytes)

	int y = x >> 8; //shifts to the right by 8 bits (operator must be on the  right or else its appending/ inserting)
	std::cout << y << "\n";
	 y = x << 8; //shifts to the left by 8 bits
	std::cout << y << "\n";
}
```

### converting using typecast 
- https://www.geeksforgeeks.org/dsa/convert-int-to-float/

### THE SHIT : Fixed point
- https://www.geeksforgeeks.org/computer-organization-architecture/fixed-point-representation/
- https://medium.com/@oumaimafisaoui/floating-and-fixed-point-representation-in-c-what-is-going-on-b71af54718a5 (MAIN article that helped to demistify this entire thng)

		To convert an integer number Num to a fixed point we multiply the number by 2^(n- 1) or we left shift the bits by (n - 1) where n is the fractional bits specified.

		With the fractional bits equal to 8 we get:

		Num.00000000

		However, to convert fixed points values to an integer:

		We use the formula:

		(float)fixed_point_number / (1 << 8)
		or
		(float)(fixed_point_number / 256)



- https://www.youtube.com/watch?v=bbkcEiUjehk (another main thing)

### precision and accuracy
- 
### Ways negtive values are represented
- 

### Method carried out to convert the vlaue

### intigers, fixed floating point, floats
- ints have 4 bytes, 8 bits depending on (1' complement , 2's complement and ..) the bits are represeted differently
- floats have 4 bytes, the first is signed bit , 8 for exponents, 23 for mantisa bits (fractional bits)
	- source : https://blog.demofox.org/2017/11/21/floating-point-precision/
- fixed floating point, in this exercise, 8 for mantissa bits fractional bits, remaining 24 bits for exponent
