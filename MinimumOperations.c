#include <stdio.h>

int main(){
	int n, arr[100], count=0;
	scanf("%d", &n);              			
	for(int i=0;i<n-1;i++){
		scanf("%d",arr[i]);
	}
	for(int i=0;i<n-1;i++){
		if(arr[i] != arr[i-1]){
			count++;
		}
	}
	printf("%d",count);
}