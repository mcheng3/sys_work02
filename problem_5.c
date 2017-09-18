#include<stdio.h>
#include<stdlib.h>

int main(){
	int count;
	int x = 1;
	int solved = 0;
	
	while(solved != 20){
		solved = 0;
		for(count = 1; count <= 20; count++){
			if(x % count == 0){
				solved++;
			}
			else{
				x++;
			}
		}
	}
	printf("%d\n", x);
}
				
				
