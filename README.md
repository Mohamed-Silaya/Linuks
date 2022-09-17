# Linux
in this repo I will try to put each about I learn in linux<br>
#video refarnace<br>
[Ref](https://www.youtube.com/watch?v=qThI-U34KYs&list=PL7B2bn3G_wfC-mRpG7cxJMnGWdPAQTViW)

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
