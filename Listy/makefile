
 
compiler=g++
standard=-std=c++14
optimisation=-O3
errors=-pedantic-errors
# optimisation=
# debug=-g
debug=
profiling=-pg
memory=memory/nvwa

.PHONY: clean

__ : main
	./main   
	
	
main : main.o functions.o debug_new.o static_mem_pool.o mem_pool_base.o bool_array.o static_mem_pool.o
	$(compiler) $(standard) $(debug) $(optimisation) -pedantic-errors -o $@ $^ 
	            

main.o : main.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors) -c -o $@ $^ 
	            
functions.o : functions.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors) -c -o $@ $^ 
	
# memory control library 

debug_new.o : $(memory)/debug_new.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors)  -c -o $@ $^ 
	
static_mem_pool.o : $(memory)/static_mem_pool.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors)  -c -o $@ $^ 		

mem_pool_base.o : $(memory)/mem_pool_base.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors) -c -o $@ $^ 		

bool_array.o : $(memory)/bool_array.cpp
	$(compiler) $(standard) $(debug) $(optimisation) $(errors)  -c -o $@ $^ 	

########################
		
 
	
clean : 	
	for f in `ls *.o *~ ` ; do  if [ -f $$f ] ; then rm $$f  ; fi;   done;
	if [ -f main ] ; then rm main ; fi ;
	if [ -d html ] ; then rm -r html; fi ;

