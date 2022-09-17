# Linux
in this repo I will try to put each about I learn in linux
#video refarnace
[Ref](https://www.youtube.com/watch?v=qThI-U34KYs&list=PL7B2bn3G_wfC-mRpG7cxJMnGWdPAQTViW)

##First:
*We have 4 action to run code to machine language :
                                                    1. Preprocessor-> gcc -E hello.c |   "Preprocessor: do only the preprocessing work      (.i files) 
                                                                                           ●Interpret preprocessor directives●Include header files
                                                                                           ●Expand macros●Remove comments "
                                 ---                                   
                                                    2. Compiler->     gcc -S hello.i |    "Compiler: compilation genenerates assembly code    (.s files) 
                                                                                             for the hardware arch, but does not assemble 
                                                                                                ●Checks for syntax errors 
                                                                                                ●Converts the src to assembly of underlying processor"
                                 ---
                                                    3. Assembler->    gcc -c hello.s |     "Assembler:  instructs gcc/assembler to assemble the assembly                                                                                                 files to generate .o locatable object files. 
                                                                                              ●Generates relocatable object files to be used by linker
                                                                                              ●Contains symbol table"
                                 ---                   
                                                    4. Linker->gcc hello.o -o helloexe|        "Linker: A linker links .o files and generate an executable.                                                                                                  It does dynamic linking by default.
                                                                                             ●Static vs Dynamic linking 
                                                                                             ●Contains code and data for allfunctions defined in src files 
                                                                                             ●Contains global symbol table"
