_This project has been created as part of the 42 curriculum by syee for CPP03, it contains notes referenced thorughout the Making of this project_

# C++ Notes
## CPP04 related

### true polymorphism
- "If i need to rewrite the funciton name in the child class to change the contents how is it polymorphism?"
	- https://www.geeksforgeeks.org/cpp/function-overriding-in-cpp/
	


### virtual and overriding
- "Why do i need virtual?"
	- https://www.w3schools.com/cpp/cpp_virtual_functions.asp
	- this was mentioned in CPP03, essentially allows for runtime polymorphism, which is noticable if class objects are initilized using heap memory
	- virtual enables runtime polymorphism by allowing a base class pointer or reference to invoke the appropriate overridden function based on the actual type of the object it refers to

- "Why do i need override when virtual is sufficient"
	- its for compiler safety
	- example : 
	 ```cpp
		class BaseClass
		{
		public:
			virtual void eatFood(std::string food);
		};

		class ChildClass : public BaseClass
		{
		public:
			void eatFood(int food); // No error, but this does NOT override.
		};

		//but!!!!

		class ChildClass : public BaseClass
		{
		public:
			void eatFood(int food) override; // Compilation error!
		};
	 ```
