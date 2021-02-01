iostream: iostream stands for standard input-output stream. This header file contains definitions to objects like cin, cout, cerr etc.
iomanip: iomanip stands for input output manipulators. The methods declared in this files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
fstream: This header file mainly describes the file stream
#cout 
#cin
#cerr
Un-buffered standard error stream (cerr): The C++ cerr is the standard error stream which is used to output the errors.As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. It does not have any buffer to store the error message and display later.
                      code-
                                  
                                  #include <iostream> 

                                    using namespace std; 

                                  int main() 
                                        { 
                                	cerr << "An error occured"; 
                                        	return 0; 
                                                    } 
#clog
buffered standard error stream (clog): This is also an instance of iostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled.



