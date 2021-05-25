// carlos was here
#include <iostream>
#include <dirent.h>      // DIR and struct dirent
#include <cstring>       // manipulate c strings and arrays - strcmp, strcpy, strcat, etc
#include <unistd.h>      // sleep
#include <stdio.h>       // result = rename(oldname, newname); then if (result == 0)
using namespace std;     // endl, cout, cin
#include <string.h>      // strerror spell out the error for errno


class myInput {
    public:  // access specifier
       int myArgs; 
       string myOption;
       string myDir;
       
       void syntax1(){
           cout << "usage:" << "\n" << endl;
           cout << "    x -d < directory name > " << "\n" << endl;
       };

       validate_myArgs (argc, string argv) 
       {
           if ( argc != 3 ) {
               cout << '\n' << "Not enough arguments" << endl;
               syntax1();
               exit(1);
           }

           if  ( strcmp(argv[1],"-d" ) != 0 )  {
               cout << argv[1] << endl;
               cout << "\n" << "Unknown parameter passed" << endl;
               syntax1();
               exit(1) ;
           }
          //  return the value to the main
          return argv[2];
       }


};


//       ------------------  Work Starts Here  -------------------
// The main procedure 
//
int main ( int argc, char **argv ) {

}

// homework assignment: 
/*
 * make a syntax procedure
 * write function strcmp
 * write findSpace function: that function that finds the space in the strings(files)
 * write a code/function in the main that will  perform that
 * write comments for the specific functions
 * complete the findspace function
 * Homework assignment:
 * 20210319 - clean up the code
 *            getDir - use the findSpace function
 *            for every file found.  
 *            remove space from the name.
 *           more stuff 
 *            rename the files.
 *            after iteration use closedir
*/
