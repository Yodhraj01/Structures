#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date {
        int day;
        int month;
        int year;
    } date;
    date a,b;
    a.day=10;
    a.month=10;
    a.year=2026;
    b.day=10;
    b.month=10;
    b.year=2026;
    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;
    if(flag==true ) printf("the dates are same");
    else printf("dates are not same");

    return 0;
    


}