#  How it affects ? How to clear it ?
1-> In case of C++, after encountering“cin” statement, we require to input a character array or a string , we require to clear the input buffer or else the desired input is occupied by buffer of previous variable, not by the desired container.On pressing “Enter” (carriage return) on output screen after the first input , as the buffer of previous variable was the space for new container(as we did’nt clear it) , the program skips the following input of container.

                                                In code Here
                                                // C++ Code to explain why 
                                                // not clearing the input 
                                                // buffer causes undesired 
                                                // outputs 
                                                        #include<iostream> 
                                                              #include<vector> 
                                                        using namespace std;
                                                        int main() 
                                                        { 
	                                                      int a; 
	                                                      char ch[80]; 
	
	                                                      // Enter input from user 
                                                      	// - 4 for example 
	                                                      cin >> a; 
	
	                                                  // Get input from user - 
	                                                  // "GeeksforGeeks" for example 
	                                                  cin.getline(ch,80); 
	
                                                    // Prints 4 
                                                  	cout << a << endl; 
                                                    // Printing string : This does 
	                                                  // not print string 
	                                                  cout << ch << endl; 
	                                                          return 0; 
                                                          }   
 the output is not printed as desired. Reason to this is an occupied Buffer. The “\n” character goes remains there in buffer and read as next input.
 
 WE Can clear it by using __cin.ignore/cin.sync / cin >> ws__ 
 Using __cin.ignore(numeric_limits::max(),’\n’);__ :- Typing “cin.ignore(numeric_limits::max(),’\n’);” after the “cin” statement discards everything in the input stream including the newline.
