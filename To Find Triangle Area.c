# include'stdio.h'
# include'conio.h'
# include'math.h'

int main(){
int a=0;
int b=0;
int c=0;

printf("__________ Area Of Triangles _________\n\n");
printf("Enter value of FIRST side:");
scanf("%d",&a);
printf("Enter value of SECOND side:");
scanf("%d",&b);
printf("Enter value of THIRD side:");
scanf("%d",&c);

if ((a+b)>c && (a+c)>b && (b+c)>a){
     double s=(a+b+c)/2.0;
     double area= sqrt(s*(s-a)*(s-b)*(s-c));
     printf("Triangle area =%lf",area);

}
else
     printf("Your's triangle area doesn't EXIST!");



return 0;
}
