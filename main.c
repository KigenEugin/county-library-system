/*
county library management system
by Eugene
Feb 2022
MIT licence
c89 compiler
*/
#include <studio.h>
#include <stdlib.h>

int menu()
{
int action;
int action;
printf("select an action:\n");
printf("1.Add new patron\n");
printf("2.View patrons\n");
printf("3.View books\n");
printf("4.Add new books\n");
printf("Your action");
scanf("%d",&action);
return action;
}
