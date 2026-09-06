#include <iostream> //Notes at bottom
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}

/*
Line 1: #include <iostream> is a header file library that lets us work with input and 
output objects, such as cout (used in line 5). Header files add functionality to 
C++ programs.

Line 2: using namespace std means that we can use names for objects and variables 
from the standard library.

Don't worry if you don't understand how #include <iostream> and using namespace 
std works. Just think of it as something that (almost) always appears in your program.

Line 3: A blank line. C++ ignores white space. But we use it to make the code more 
readable.

Line 4: Another thing that always appear in a C++ program is int main(). This is 
called a function. Any code inside its curly brackets {} will be executed.

Line 5: cout (pronounced "see-out") is an object used together with the insertion 
operator (<<) to output/print text. In our example, it will output "Hello World!".

Note: C++ is case-sensitive: "cout" and "Cout" has different meaning.

Note: Every C++ statement ends with a semicolon ;.

Note: The body of int main() could also been written as:
int main () { cout << "Hello World! "; return 0; }

Remember: The compiler ignores white spaces. However, multiple lines makes the code 
more readable.

Line 6: return 0; ends the main function.

Line 7: Do not forget to add the closing curly bracket } to actually end the main 
function.

You might see some C++ programs that run without the standard namespace line. 
The using namespace std; statement can be omitted, and replaced with the std 
keyword followed by the :: operator, for some objects (like std::cout in the 
example below):

#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}

Both approaches are valid in C++. Using std:: makes it clear where names come from 
and avoids name conflicts in larger programs.
*/
