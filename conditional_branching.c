#include<stdio.h>
int main(){
    float salary,hra,da;
    float gross_salary;

    //input from user
    printf("enter a salary:\n");
    scanf("%f",&salary);

    //statements
    if (salary >=5000 && salary<=10000)
    {
        hra=salary*0.10;
        da = salary * 0.5;
    }
    
    else if (salary>=10000 && salary<=15000)
    {
        hra = salary * 0.15;
        da = salary * 0.8;
    }
    else
    {
      printf("syntax error");
    }

    //find out gross salary
    gross_salary = salary + hra + da ;

    printf("the gross salary is 2 %f",gross_salary);
    return 0;
}
