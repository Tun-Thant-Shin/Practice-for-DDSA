#include<stdio.h>

char opt;
int num_1=0;
int num_2=0;
int ans = 0;
int rem = 0;
int addition();
int subtraction();
int multiplication ();
int division ();
int main(){
    printf("Hello friend!\n This my mini calculator.\n");
    printf("You have four options to operation.\n");
    printf(" + for addition \n - for subtraction  \n * for multiplication \n / for division\n");
    printf("ENTER OPERATOR :");
    scanf("%c",&opt);

    switch (opt) {
case '+':
    addition();
    break;

case '-':
    subtraction ();
    break;

case '*':
    multiplication ();
    break;

case  '/':
    division ();
    break;

default:
    printf("Sorry! Your operator is not included in my mini calculator.");
    break;
    }
return 0;

}

int addition (){

printf("ENTER FIRST NUMBER : ");
scanf("%d",&num_1);
printf("ENTER SECOND NUMBER : ");
scanf("%d",&num_2);
ans = num_1 + num_2;
printf("%d + %d = %d",num_1,num_2,ans);

return ans;
}

int subtraction (){

printf("ENTER FIRST NUMBER : ");
scanf("%d",&num_1);
printf("ENTER SECOND NUMBER : ");
scanf("%d",&num_2);
ans = num_1 - num_2;
printf("%d - %d = %d",num_1,num_2,ans);

return ans;
}

int multiplication (){

printf("ENTER FIRST NUMBER : ");
scanf("%d",&num_1);
printf("ENTER SECOND NUMBER : ");
scanf("%d",&num_2);
ans = num_1 * num_2;
printf("%d * %d = %d",num_1,num_2,ans);

return ans;
}
int division (){

printf("ENTER FIRST NUMBER : ");
scanf("%d",&num_1);
printf("ENTER SECOND NUMBER : ");
scanf("%d",&num_2);

if (num_2 == 0){

    printf("CANNOT divided by zero! \n Please enter another number : ");
    scanf("%d",&num_2);
}
ans = num_1 / num_2;
rem = num_1% num_2;
printf("%d * %d = %d \n",num_1,num_2,ans);
printf ("The remainder = %d", rem);

return ans;
}
