#include<stdio.h>
#include<string.h>

union Stu_Data
{
    int ID;
    char name[50];
    float marks;
} S1;

int main()
{
    S1.ID=1;
    S1.marks=100;
    strcpy(S1.name, "Anmol Purwar");

    printf("ID of Student:%d\n",S1.ID);
    printf("Marks of Student:%0.2f\n",S1.marks);
    printf("Name of Student:%s\n",S1.name); // Union wil handle only this info. Rest will be garbage value.
}