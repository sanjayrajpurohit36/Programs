#include<stdio.h>
#include<string.h>

int reduceString(char str[1000]) {
	int rStringLength = 0;
	char reduced_string[1000]="";
	int count=1;
	int isReduced = 0;
	printf("%s", str);
	for (int i=0; i<strlen(str); i++) {
		if(str[i] == str[i+1]) count += 1;
		else {
			// if count is odd
			if(count % 2 != 0) { 
				reduced_string[rStringLength++] = str[i];
				isReduced = 1;
			}
			count=1; // rest count for next pairs;
		}
	}
	strcpy(str, reduced_string);
	// printf("%d", isReduced);
	if(isReduced == 0) {
		return isReduced;
	} else {
		reduceString(str);
	}
}

int main() {
	char str[1000];
	scanf("%s", str);
	int ans = reduceString(str);
	printf("%d", ans);
	// printf("%s",str);
	return 0;
} 