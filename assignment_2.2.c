# include "stdio.h"

int std_1[5];
int std_2[5];
int std_3[5];
int sum1 = 0;
int sum2 = 0;
int sum3 = 0;
int ave1 = 0;
int ave2 = 0;
int ave3 = 0;

int student_1();
int student_2();
int student_3();
int compare1();
int compare2();
int compare3();

int main(){

student_1();
student_2();
student_3();
compare1();
compare2();
compare3();

return 0;
}

int student_1(){
printf("For First Student!\n\n");

for (int i = 0;i<6; i++){
    printf("Enter Subject %d marks :",i+1 );
    scanf("%d",&std_1[i]);

    if (std_1[i]>100){
            printf("WRONG MARKS!! \nThe mark must be between 1 and 100!!\n");
            printf("Enter Subject %d marks again !! :",i+1);
            scanf("%d",&std_1[i]);
            if (std_1[i]<40){
                printf("FAIL!!\n\n");
    }
             else{
                if (std_1[i]>=40){
                 printf("PASS!!\n");
                  if (std_1[i]>=80){
                    printf("DISTINCTION!!\n\n");
            }
        }

        }}

    else if (std_1[i]<40){
        printf("FAIL!!\n\n");
    }
    else {
        if (std_1[i]>=40){
            printf("PASS!!\n");
            if (std_1[i]>=80){
              printf("DISTINCTION!!\n\n");}
    }}}
for (int j = 0; j<6;j++){
    sum1 += std_1 [j];
}
printf("This is total marks of First student %d \n\n",sum1);

ave1=sum1/6;

return 0;
}

int student_2(){
printf("For Second Student!\n\n");

for (int i = 0;i<6; i++){
    printf("Enter Subject %d marks :",i+1 );
    scanf("%d",&std_2[i]);

    if (std_2[i]>100){

            printf("WRONG MARKS!! \nThe mark must be between 1 and 100!!\n");
            printf("Enter Subject %d marks again !! :",i+1);
            scanf("%d",&std_2[i]);
                 if (std_2[i]<40){
                printf("FAIL!!\n\n");
    }
             else{
                if (std_2[i]>=40){
                 printf("PASS!!\n");
                  if (std_2[i]>=80){
                    printf("DISTINCTION!!\n\n");
            }
        }

        }
    }

    else if (std_2[i]<40){
        printf("FAIL!!\n\n");
    }
    else {
        if (std_2[i]>=40){
            printf("PASS!!\n");
            if (std_2[i]>=80){
              printf ("DISTINCTION!!\n\n");
            }
        }

    }
    }
for (int j = 0; j<6;j++){
    sum2 += std_2 [j];
}
printf("This is total marks of second student %d \n\n",sum2);

ave2=sum2/6;

return 0;
}

int student_3(){
printf("For Third Student!\n\n");

for (int i = 0;i<6; i++){
    printf("Enter Subject %d marks :",i+1 );
    scanf("%d",&std_3[i]);
    if (std_3[i]>100){
            printf("WRONG MARKS!! \nThe mark must be between 1 and 100!!\n");
            printf("Enter Subject %d marks again !! :",i+1);
            scanf("%d",&std_3[i]);
                 if (std_3[i]<40){
                printf("FAIL!!\n\n");
    }
             else{
                if (std_3[i]>=40){
                 printf("PASS!!\n");
                  if (std_3[i]>=80){
                    printf("DISTINCTION!!\n\n");
            }
        }


    }}

    else if (std_3[i]<40){
        printf("FAIL!!\n\n");
    }
    else {
        if (std_3[i]>=40){
            printf("PASS!!\n");
            if (std_3[i]>=80){
               printf("DISTINCTION!!\n\n");
            }
        }

    }
    }
for (int j = 0; j<6;j++){
    sum3 += std_3 [j];
}
printf("This is total marks of third student %d \n\n",sum3);

ave3=sum3/6;

return 0;
}


int compare1(){
    if (std_1[5]>39 && std_1[4]>39 && std_1[3]>39 && std_1[2]>39 && std_1[1]>39 && std_1[0]>39){
        if (std_2[5]>39 && std_2[4]>39 && std_2[3]>39 && std_2[2]>39 && std_2[1]>39 && std_2[0]>39){
            if (std_3[5]>39 && std_3[4]>39 && std_3[3]>39 && std_3[2]>39 && std_3[1]>39 && std_3[0]>39){
                    if (ave1>ave2 && ave1>ave3){
                        printf("FIRST STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else {
                        printf("FIRST STUDENT PASS!!\n\n");
                    }

            }
        }
        else {

            if(std_3[5]>39 && std_3[4]>39 && std_3[3]>39 && std_3[2]>39 && std_3[1]>39 && std_3[0]>39){
                    if (ave1>ave3){
                         printf("FIRST STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else {
                        printf("FIRST STUDENT PASS!!\n\n");
                    }

            }
        }}


    else {
        printf("FIRST STUDENT FAIL!!\n\n");
    }

return 0;
}

int compare2(){
    if (std_2[5]>39 && std_2[4]>39 && std_2[3]>39 && std_2[2]>39 && std_2[1]>39 && std_2[0]>39){
        if (std_1[5]>39 && std_1[4]>39 && std_1[3]>39 && std_1[2]>39 && std_1[1]>39 && std_1[0]>39){
            if (std_3[5]>39 && std_3[4]>39 && std_3[3]>39 && std_3[2]>39 && std_3[1]>39 && std_3[0]>39){
                    if (ave2>ave1 && ave2>ave3){
                        printf("SECOND STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else{
                        printf("SECOND STUDENT PASS!!\n\n");
                    }

            }
        }
        else {

            if(std_3[5]>39 && std_3[4]>39 && std_3[3]>39 && std_3[2]>39 && std_3[1]>39 && std_3[0]>39){
                    if (ave2>ave3){
                         printf("SECOND STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else {
                        printf("SECOND STUDENT PASS");
                    }

            }
        }}


    else {
        printf("SECOND STUDENT FAIL!!\n\n");
    }

return 0;
}

int compare3(){
    if (std_3[5]>39 && std_3[4]>39 && std_3[3]>39 && std_3[2]>39 && std_3[1]>39 && std_3[0]>39){
        if (std_1[5]>39 && std_1[4]>39 && std_1[3]>39 && std_1[2]>39 && std_1[1]>39 && std_1[0]>39){
            if (std_2[5]>39 && std_2[4]>39 && std_2[3]>39 && std_2[2]>39 && std_2[1]>39 && std_2[0]>39){
                    if (ave1>ave2 && ave1>ave3){
                        printf("THIRD STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else {
                        printf("THIRD STUDENT PASS!!\n\n");
                    }

            }
        }
        else {

            if(std_2[5]>39 && std_2[4]>39 && std_2[3]>39 && std_2[2]>39 && std_2[1]>39 && std_2[0]>39){
                    if (ave3>ave2){
                         printf("THIRD STUDENT GOT HIGHEST MARKS!!\n\n");
                    }
                    else{
                        printf("THIRD STUDENT PASS!!\n\n");
                    }

            }
        }}


    else {
        printf("THIRD STUDENT FAIL!!\n\n");
    }
return 0;
}

