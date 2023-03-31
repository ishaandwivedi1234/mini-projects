#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main(){
       char  appName[100];

	printf("Enter application name to open it: ");
 
	fgets(appName,100,stdin);

	
	appName[strcspn(appName,"\n")] =0;
	char command[100] = "open -a ";
	strcat(command,appName);
	system(command);
	return 0;

}