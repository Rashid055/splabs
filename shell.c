#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h> 
#include <stdarg.h>   
#include <stdio.h>
#define MAX_SIZE 1025

int print_select(); 

int main() 
{
	char t34[MAX_SIZE];  /* Initialize static memory. */
    	int length;
	char t34_copy[MAX_SIZE];
	printf("Enter a command line ");
    while (fgets( t34, MAX_SIZE, stdin))
    {



        length=t34len(t34);

        if (t34[length-1]=='\n')
        {
             t34[length-1]='\0';
        }


	int shym=0,astana=length;
	 while (t34[shym]==' ')
        	shym++;
    	while (t34[astana-1]==' ')
        	astana--;
	astana-=shym;
	strncpy(t34,t34+shym,astana);


	length=t34len(t34);	
       	if(strcmp(t34,"exit")==0){
		exit(1);
		break;
	}
	char *pChar = &t34[t34len(t34)-1];
		if(strcmp(pChar,"&")==0){

			pid_t process = fork();

			if(process<0){
				abort();
			}
			else if(process==0){
				char *name[] = { "/bin/bash","-c",st34,NULL};
				execvp(name[0], name);
				exit(-1);
			}

			else{ 
				waitpid(process,0,0);
			}

		}
		else{
			pid_t process=fork();
			if(process<0){
				abort();
			}
			else if(process==0){
				  char *name[] = { "/bin/bash","-c",t34,NULL};
				  execvp(name[0], name);
				exit(-1);
			}

			else{
				waitpid(process,0,0);

			}

		}
	printf("Enter a command line ");
    }
    return 0; 



} 

