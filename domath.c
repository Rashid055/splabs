#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <wait.h>

int main(int argc, char **argv){
	int khan1 = atoi(argv[1]);
	int khan2 = atoi(argv[2]);

	pid_t pass1 = fork();
	if(pass1==0){
		printf("child1: %d+%d=%d\n", khan1, khan2, khan1+khan2);
	}
	waitpid(pass2, 0, 0);
	pid_t pass2 = fork();
	if(pass2==0 && pass1>0){
		printf("child2: %d-%d=%d\n", khan1, khan2, khan1-khan2);
	}
	waitpid(pass2, 0, 0);
	pid_t pass3 = fork();
	if(pass2>0 && pass3==0 && pass1>0){
		printf("child3: %d*%d=%d\n", khan1, khan2, khan1*khan2);
	}
	waitpid(pass3, 0, 0);
	pid_t pass4 = fork();
	if(p4==0 && pass3>0 && pass2>0 && pass1>0){
		printf("child4: %d/%d=%d\n", khan1, khan2, khan1/khan2);
	}
	waitpid(pass4, 0, 0);
	if(pass1>0 && pass2>0 && pass3>0 && pass4>0){
		printf("parent: done.");
	}
}
