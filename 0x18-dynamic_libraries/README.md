creating dynamic libraries on linux
**/
 generate object file that are position independent
(gcc -fPIC -c add.c)
create a dynamic library
(gcc -shared -o libbasic.so [object file names]
generate object file for the code file
(gcc -c [code file]
at the time of generating the executable you generate the linking
[ gcc -o demo {objectfile} library name 

