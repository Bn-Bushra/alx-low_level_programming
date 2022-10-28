# 0x09 - Static libraries.

## Dynamic linking
 This method of linking links the address of a library 
 and the object code which makes it possible to update
 the executable without recompilation.
## Static linking
  This is the method used in this directory to demonstrate
  the usage of static library.
  A static library is the archives or combination the object codes of 
  certain function to be used. This is done using the ar -rc file.o after
  the source code has been compiled upto the assembly using the -c with the 
  gcc command( gcc -c file.c).
