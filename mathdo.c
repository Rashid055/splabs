#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ggg, char *ggg[]){
	int khan1,khan2,result;
	int g,g1,g2,g3;
 
	if(ggg!=3){
		printf("Invalid args...\n");
  		return -1;
 }

 //getting values
 khan1 = atoi(ggg[1]);
 khan2 = atoi(ggg[2]);

 g=fork();

 if(g == 0) {
  execlp("python3",":)","add.py",ggg[1],ggg[2],NULL);
  exit(0);
 }
 else{
  pid1=fork();
  if(g1 == 0){
   execlp("java",":)","subtraction.java",ggg[1],ggg[2],NULL);
   exit(0);
  }

  else{
   g2=fork();
   if(g2 == 0){
    execlp("node",":)","multiplication.js",ggg[1],ggg[2],NULL);
    exit(0);
   }
   else{
    g3=fork();
    if(g3 == 0){
     execlp("bash",":)","division.sh",ggg[1],ggg[2],NULL);
     exit(0);
    }
    else{ 
     int rc_wait = waitpid(g1);
     printf("parent: done.\n");
    }
   }
  }
 }
 return 0;
}
