1. what is the point of a default constrcutor
a constrcuto s used ot initialized values upon an object being created 
and that is helpful when its 

classnam(int value)
{
	x = vlaue; 
}

but for a default constructor youre not supposed to key in anythiing into the paremeters, so whats the point for this default constructor anyways

its actually the same as doing 

class x{

	int i;
	
	x()
	{
		i = 0;
	}
}

so essentially its initializing the values to the system default values

or if you want the variables to be a specific value

class x{

	int i;
	
	x()
	{
		i = 20;
	}
}

2. setting variables public or private what is the difference
if the varibales are private 

doing this in main 

classname c1;

c1.var = x; //will cause an error 

and requires a member funciton a setter i assue to manpulate or chnage it 

what is the usecase that having a private variable?

if a variable is meant to be read only and not to be manipulated, by making it public theres a chance that someone may do

c1.value = +9391834;

3. private by default
theres no specific need to do 

class x{

	private :
		int var; 
}

because anything that iis written in the class is private by default unlike struct

now that brings us to another question
"wait you can have member funcitons in structs? how? how do you even access them ?"



4. how does destructors work

it is calle dwhen an object goes out of scope (scope is defines with {})

Do we need to call it manually ? 
No, you generally do not need to call destructors explicitly in C++. The C++ runtime environment automatically invokes destructors when an object's lifetime ends, they will have hteir won destructor function

5. creating values by the heap 
	using new and delete instead of malloc and free

	e.g. for heap

	theClass *var = new theClass(bla); // call the constructor and new when initializing

	e.g. for stack 
	
	theClass var; 

6. deleting value on the heap 

	https://www.geeksforgeeks.org/cpp/delete-in-c/

7. why are there so many files, how do i declare the contetns? 
https://www.modernescpp.com/index.php/c-core-guidelines-source-files/

- apparently yo shouldo only include the funciton body if its a simple getter and setter funciton otherwise , seperate them 

https://www.youtube.com/watch?v=LjNsqmr2Kwc <- on how to declare it


8. scope resolution operator
- https://www.youtube.com/watch?v=LjNsqmr2Kwc
- im using scope resolution operator to assign the functions inside the class


9. member funcitons in general 
- https://www.youtube.com/watch?v=1oOWq4rpXIg

10. decalring outside the funciron 
- https://www.codecademy.com/resources/docs/cpp/destructors

11. classes and stuff
- https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm

12. function overloading 
- Function overloading allows us to define multiple functions with the same name but with different parameters, so that the same function name can perform different tasks depending on the values and types of arguments passed. 

13. initilizing using brace and list 

14. C++ naming conventions 
Based on online resources there isnt a definite naming convention
- https://www.geeksforgeeks.org/cpp/naming-convention-in-c/
HOwever, based on google's c++ styling guide 
- https://google.github.io/styleguide/cppguide.html
	Variables: snake_case

	Class member variables: snake_case_

	Functions: PascalCase

	Constants: kMixedCase
- theres also microsoft's styling guide which uses m_ for member variables, i think this is pretty good considering by typing m_ it will autofil the releavent member variables 
 - https://learn.microsoft.com/en-us/windows/win32/stg/coding-style-conventions

15. 3 ways to initilzie variables 
- Member initializer list: Initializes class members inside a constructor; C++98 uses `: health_(health)`
- Direct initialization: Creates an object using parentheses, e.g. `Player player(100);` (C++98+); braces `Player player{100};` are available in C++11+.
- Copy-list initialization: Creates an object using `= {}`, e.g. `Player player = {100};` (C++11+).

16. deleting an array of objects
https://www.geeksforgeeks.org/cpp/deletion-of-array-of-objects-in-c/

17. pointer 
- https://www.w3schools.com/cpp/cpp_pointers.asp

18. constant reference
const &type
- https://www.geeksforgeeks.org/cpp/return-by-reference-in-c-with-examples/

19. Using the this keyword
- https://www.geeksforgeeks.org/cpp/cpp-program-to-show-use-of-this-keyword-in-class/

20. ex093 relates, i didnt manage to assign an external object to a member variable
- https://stackoverflow.com/questions/10280328/setting-a-member-variable-to-an-object-outside-the-class

21. nonstatic memebr funcitons 
- https://en.cppreference.com/cpp/language/member_functions

22. ex04 related : file manipulaiton
- https://www.geeksforgeeks.org/cpp/file-handling-c-classes/
• fstream: Handles both reading and writing (defaults to ios::in | ios::out mode).
• ifstream: Handles reading only (input file stream, defaults to ios::in).
• ofstream: Handles writing only (output file stream, defaults to ios::out).

declare a file
use the file

23. more on the fstream header 
- https://cplusplus.com/reference/fstream/fstream/
- https://www.w3schools.com/cpp/ref_fstream_fstream.asp

24. more on getline 
- https://www.geeksforgeeks.org/cpp/getline-string-c/

25. creaitng a files
- fstrema is a combination of reading and to wrtie to a file (ifstream, ofstream) , when creating a file, it has to be specified that it is writing to a file (std::ios::out)
- ofstream is a 


26. string manipulation for ex04
- https://cplusplus.com/reference/string/string/

27. appending words in c++
- https://www.geeksforgeeks.org/cpp/stdstringappend-vs-stdstringpush_back-vs-operator-c/

28. bypassing ofstream to now allow std::string
- https://www.w3schools.com/cpp/cpp_strings_cstyle.asp


29. using function pointers
- https://www.geeksforgeeks.org/cpp/function-pointer-in-cpp/