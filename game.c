#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess,ngusses=1;
srand(time(0));
number=rand()%100+1;
do{
    printf("Guess a number between 1 and 100\n");
    scanf("%d",&guess);
    if(guess>number){
        printf("Enter a lower number!\n");

    }
else if(guess<number){
    printf("Enter a higher number\n");
}
else{
    printf("You gussed it in %d attempts\n",ngusses);
}
ngusses++;
}
while(guess!=number);
return 0;
}
