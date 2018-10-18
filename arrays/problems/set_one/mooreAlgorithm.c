// Find the majority element via moore algorithm.

#include<stdio.h>
#include<stdlib.h>

int getMajorityElement(int* x, int n){
	int voter = *(x);
	int vote = 0;
	for(int i=1; i<n; i++){
		if(i == voter){
			vote++;
		}
		else{
			vote--;
			if(vote==0){
				voter = *(x+i);
						
			}
		}
	}

	return voter;
}


int isMajorityElement(int* x, int n, int num){
	int count=0;
	for(int i=0; i<n; i++){
		if(i==num){
		count++;
		}
	}
	
	if(count>=num/2){
		return 1;
	}
}

int main(){
	
	int n;
	scanf("%d", &n);
	int* x = (int*)malloc(sizeof(int));
	
	for(int i=0; i<n; i++){
		scanf("%d",(x+i));
		
		
	}
	
	int winner = getMajorityElement(x, n);
	if(isMajorityElement(x,n, winner))
		printf("\n%d", winner);
	else
		printf("\nNo majority\n");
	
}
