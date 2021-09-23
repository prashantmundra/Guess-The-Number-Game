//  Guessing number between 1 to 100


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    // printf("random number =%d\n",number);
    

do{
    printf("Guess the number between 1 to 100=\n");
    scanf("%d",&guess);
        if(guess>number){
            printf("lower number please !!!\n");
        }
        else if(guess<number){
            printf("Higher number please!!!\n");
        }
        else if(guess=number){
            printf("u guessed the number in %d\n guesses ",nguess);
        }
       
        nguess++;
}while(guess!=number);
 


return 0;
}



// guessing numbers between 1 to 10
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     int num,guess,nguess=1;
//     srand(time(0));
//     num=rand()%10+1;
//     // printf("random number is =%d\n",num);

// do{
//     printf("guess a number between 1 to 10=");
//     scanf("%d",&guess);
//     if(guess<num){
//         printf("Higher number please!!!\n");
//     }
//     else if (guess>num){
//         printf("Lower number please!!!\n");
//     }
//     else{
//         printf("u guessed the number in %d attempts\n",nguess);
//     }
//     nguess++;

// }while(guess!=num);

//     return 0;
// } 