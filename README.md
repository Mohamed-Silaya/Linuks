# Linux
in this repo I will try to put each about I learn in linux<br>
#video refarnace<br>
[Refrance](https://www.youtube.com/watch?v=qThI-U34KYs&list=PL7B2bn3G_wfC-mRpG7cxJMnGWdPAQTViW)

## First: We have 4 action to run code to machine language :<br>
 ## 1. Preprocessor-> gcc -E hello.c |   <br> 
   Preprocessor: do only the preprocessing work      (.i files) <br>
   * Interpret preprocessor directives <br>
   * Include header files<br>
   * Expand macros <br>
   * Remove comments <br>
                                                                  
##  2. Compiler->     gcc -S hello.i | <br>
Compiler: compilation genenerates assembly code (.s files) for the hardware arch, but does not assemble <br>
    * Checks for syntax errors <br>
    * Converts the src to assembly of underlying processor<br>
                                 
##  3. Assembler->    gcc -c hello.s | <br>    
   Assembler:  instructs gcc/assembler to assemble the assemblyfiles to generate .o locatable object files. <br>
  * Generates relocatable object files to be used by linker<br>
  * Contains symbol table <br>
                                                   
##  4. Linker->gcc hello.o -o helloexe| <br>  
  Linker: A linker links .o files and generate an executable. It does dynamic linking by default.<br>
 * Static vs Dynamic linking <br>
 * Contains code and data for allfunctions defined in src                                                                                                      files<br> 
 * Contains global symbol table <br>

---
# 2. Linker

## 1. Why we use Linker ?: <br>
 1. Understanding linker help us make large programs
 2. Avoiding dangersous errors like what happens when we create global variable with the same name in multiple object files
 3. understand languge scoping rules
 4.uderstand other system concepts , like loading and running programes, vertual memory , paging and memory        mapping
 5. understanding linling will enxploit shared libraries
## 2. Advantages of Linkers:
  1.Modularity: we can split it to smaller source files insted of big one ,build libraries of common function        like standerd c library.
   
 2. Efficiency: it saves time , if we have 10 files and make change in one we need to compile it only.

## 3. what linkers do? :
 1. Relocation: merge the code and data sections of multple obj files into the code and data sections of final exe.(The addres change)
 2. Symbol Resolution:Liker associate each symbol refrence with exacly one symbol definition

### 1. Relopcation: 
 * to make it ->[gcc -c *.c] ->file.o ,, to make exe -> [gcc *.o -o myexe] ,NOTE: it must have main because it needs entery point.
 * To see address ->[objdump -d -M intel file.o]

### 2. Linker Symbols:
* Global Symbols   , can be refrenced by other modules
* External Symbols , keyword(extern)
* Local Symbols    , keyword(static)

#### Symbol table:
* [objdump -t file.o]
* [nm file.o]
#### Static Linker :
* static linking -> gcc -- static file1.o file2.o -o fileexe
1. strong symbol : finction name - initiate globale
2. weak   symbol : uninitiate globale
 #### Static Linker rules:
 1. multiple stronge are not allowed
 2. when there is strong and weak symbol choose strong
 3. when there are multiple weak choose random one

## 4. Libraries:
### 1. Static Libraries: 
to get standard c lib: <br>
[ar -x /usr/lib/x86_64-linux-gnu/libc.a] <br>

* ar -> library utillity
* -x -> extract all files to current dir
* to know num of files: ls | wc

#### To make my static lib :
1. I made header file (file.h) to pu tdeclariton of functions 
2. Then get file.o by -> gcc -c *.c
3. To make the atatic lib, I zip it : [ar -rs libanyname.a file1.o file2.o file3.o ]
4. then I put my file.c in driver(folder)
5. I will manchin where is header file path (I), in my case "gcc -c main.c -I../"
6. to run the programe we need to mention to the lib [gcc main.o -o myexe -lfile -L../]
7. run it [./myexe]
 
#### To make my dynamic lib :
1. To make dynamic lib [gcc -shared *.o -o libmohamed.so]
2. go to driver folder to link main [gcc -c main.c -I../]
3. to excute it [gcc main.c -o myexe -lmohamed -L../]
4. we will update innronment var ld path [export LD_PATH=$LD_LIBRARY_PATH:/home/mohamed/hello_c/linking/dynamoclib]
6 . 











