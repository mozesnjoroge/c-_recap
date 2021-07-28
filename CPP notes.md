>#  Introduction
- Compile language
- Compilation + linking(combines a number of cpp files) = executable file
 ### Generic programming 
 - Use or rectreate structures to work with different types of data.
 Vectors allude to Array Lists

 >## Concepts defined
 - Preprocessor e.g 
 ```c++
 #include <iostream>
 ```
### 'std' defined
- Its a namespace
- Group our code and prevent naming conflict.
```c++ 
std::cout<<"Namespace"<<endl;
bill::cout<<"Bill's function";
sue::<<"Sue's function";
```
- For good practise reasons, "using namespace std" is a bad practice. 
- Its better to define the function std implicitly in code rather than importing the entire namespace.
- This is mostly applicable to large and complex applications.
- *cout* is an object that describes a console output.
- Its derived from *ostream* class.

>## Using declaration and directive
- *using namespace std* is a using directive.
- Prefixing an object such as std::cout allows you to clearly define the item you are trying to reference, in this case *cout*
- Alternative is using declarative.
*using std::cout* in place of *using namespace std*

>## Variables
*endl* manipulator
- Using *cout* for printing variables and/or character to the console is better than *printf()*.
- It averts the need to specify the data type specifier such as %i fro integer variable.

>## User input
*cin* - to insert data from the console.
- cin is an object of istream.

>## Conventions
- Defined in style guides.
- In comments, only include stuff that are relevant to explain.
- For more details on code conventions, visit [github.com]('https://cppcoreguidelines/github.com')
- C++ Builder IDE - recommended for eay c++ devt.

>## Functions
- Definition and declaration.
- Two ways to define pow function.