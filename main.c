    name1, 3300
    name2, 7700*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
    char name[50] ;
    float salary ;
}emp;
int main(){
    int i=0 , n_emp;
    FILE *fptr ;
    printf("HoW many Employee data text file you wanna create : ");
    scanf("%d" , &n_emp);
    emp e[n_emp];
    while(i<n_emp){
        fflush(stdin);
        printf("Enter The name of employee %d :\n" , i+1);
        gets(e[i].name);
        printf("Enter The salary of employee %d :\n" , i+1);
        scanf("%f" , &e[i].salary);
        i++;
    }
    fptr = fopen("Employee Data.txt" , "w");
    fprintf(fptr, "Sr.no      Salary       Employee\n");            
    for(int j=0 ; j<n_emp ; j++){
        fprintf(fptr , "%d         %0.2f       %s\n" ,j+1 ,e[j].name , e[j].salary);
    }
    return 0 ;
}
