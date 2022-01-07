#include<stdio.h>
int main(){
	FILE *out=fopen("new_file","w");
	fputs("My first line",out);
	fclose(out);
	return 0;
}