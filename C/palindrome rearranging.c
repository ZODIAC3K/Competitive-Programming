/*
________________________________________________________________________________________________________________________________________________
Question - 2
Given a s, your task is to reorder its letters in such a way that it becomes a palindrome(i.e it reads the same backward and forward).
Input --
The only input line has a s of length n consisting of characters A-Z.
Output --
Print a palindrome consisting of the characters of the original s. You may print any valid solution.
If there is no solution print "NO SOLUTION".
Example
Input:
AAAACACBA
OUTPUT:
AACABACAA
________________________________________________________________________________________________________________________________________________

*/

// THINGS TO FIX.
// FIX WHEN EVEN STRING is REVERSE ( 8+ Characters ) REVERSED STRING GIVES RANDUM VALUE (WE NEED TO REMOVE IT).
// REVERSE strrev() function dosnt work with google Colab so find a way to return the value.
// To solve it just reverse the string using your own function.


#include <stdio.h>
#include <string.h> // we need to add this to use strlen() function we could have used sizeof() function.
#include <stdlib.h>


int main (){

system("CLS"); // To clear terminal
char s1[100];
char s2[100],s3[100],s4[100];
printf("Enter the string (Either in CAPS OR SMALL): ");
scanf("%s",s1);
char t;
int i, j,freq[100],x = 0,y = 0,c = 0,limitation = 0;
int freqL[100]; // Testing something
int n = strlen(s1);

// To arrange characters in assending order.
for (i = 0; i < n-1; i++) {
	for (j = i+1; j < n; j++) {
		if (s1[i] > s1[j]) {
				t = s1[i];
				s1[i] = s1[j];
				s1[j] = t;
		}
	}
}

// Copying all elements of 's1' array  to 's2' arry.
for (i = 0; i < n; i++){     
    s2[i] = s1[i];
}

// Replacing all elements of s2 execpt the first accurance of unique elements.
for(i = 0; i < n; i++){
    freq[i] = 1;
        for(j = i+1; j < n; j++){
            if(s2[i] == s2[j]){
                freq[i]++;
                s2[j] = '-';
            }
        }
}

// Counting how many time each characters has accured in our 's2' array and storing it in 'freqL' array.
for(int i = 0; i < n; i++){
    if(s2[i] != ' ' && s2[i] != '-'){
            freqL[x] = freq[i];
            x++;
    }
}

for(int i = 0; i < n; i++){
    if(s2[i] != ' ' && s2[i] != '-'){
            s4[c] = s2[i];
            c++;
    }
}

int ik = strlen(s4);
if ( n >= 4){
    limitation = 2;
}
else{
    limitation = 1;
}


if(n%2 == 0){
    int test=0;
    for(i=0; i<n; i++){
        if(s2[i] != ' ' && s2[i] != '-' ){
            if(freq[i]%2 == 0){
                test++;
            }
        }
    }
    if(test == ik-1 || test == ik){
        for(i=0; i < n; i++){
            if((s2[i] != ' ' && s2[i] != '-' && s2[i] != 0  && freq[i] != (freq[i]%2 == 1))){
                x = 0;
                for(i=0; i < n; i++){
                    if(s2[i] != ' ' && s2[i] != '-'){
                        y = freq[i];
                        if(y == 2){
                        y = 1;
                        }
                        else{
                        y = y/2;
                        }
                        for(j = 0; j < y ; j++){
                            printf("%c",s2[i]);
                            s3[x] = s2[i];
                            x++;
                        }
                    }
                }
            }
        }
        for(i = strlen(s3)-limitation; i >= 0 ; i--){
                if(s3[i] != ' ' && s3[i] != '_' && s3[i] != '-'){
                    printf("%c",s3[i]);
                }
        }
        printf("\n");
    }else{
        printf("NO SOLUTION");
    }
}

if (n%2 == 1){
    int test=0;
    for(i=0; i<n; i++){
        if(s2[i] != ' ' && s2[i] != '-'){
            if(freq[i]%2 == 1){
                test++;
            }
        }
    }
    if(test == 1){
        x = 0;
        for(i=0; i < n; i++){
            if(s2[i] != ' ' && s2[i] != '-' && freq[i] != 1){
                y = freq[i];
                if ( y % 2 == 0){
                    y = y/2;
                }
                else if (y % 2 == 1){
                    y = y;
                }
                // printf("%d", y); // Checking value of y.
                for(j = 0; j < y ; j++){
                    printf("%c",s2[i]);
                    s3[x] = s2[i];
                    x++;
                }
            }
        }
        for(i=0; i < n; i++){
            if((s2[i] != ' ' && s2[i] != '-' && s2[i] != 0 ) && freq[i] == 1 ){
                t = s2[i];
                printf("%c", t);
            }
        }
        for(i = strlen(s3); i >= 0 ; i--){
                if(s3[i] != ' ' && s3[i] != '_' && s3[i] != '-' && s3[i] != 'i' && s3[i] != 'm' && s3[i] != '_'){
                    printf("%c",s3[i]);
                }
        }
    printf("\n");
    }else{
        printf("NO SOLUTION");
    }
}
return 0;
}
