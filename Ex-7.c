#include <stdio.h>
#include <string.h>

struct Driver
{
    char *name;
    char *Dl_no;
    char *route;
    float Kms;
};

int main()
{
    int n=5;
    struct Driver D[n];
  
    D[1].name = "Ansh";
    D[1].Dl_no = "UP92000AB";
    D[1].route = "Jhansi";
    D[1].Kms = 56.84;
  
    D[2].name = "Ram";
    D[2].Dl_no = "UP93000AB";
    D[2].route = "Kanpur";
    D[2].Kms = 87.94;
  
    D[3].name = "Ankit";
    D[3].Dl_no = "UP94000AB";
    D[3].route = "Lucknow";
    D[3].Kms = 89.78;
  
    D[4].name = "Anshu";
    D[4].Dl_no = "UP95000AB";
    D[4].route = "Delhi";
    D[4].Kms = 78.55;

    D[5].name = "Amit";
    D[5].Dl_no = "UP96000AB";
    D[5].route = "Noida";
    D[5].Kms = 78.50;

    printf("Drivers Information Updated!\n\n");
    for (int j = 1; j <= n; j++)
    {
        printf("Name of Driver %d : %s\n", j, D[j].name);
        printf("Dl no. of Driver %d : %s\n", j, D[j].Dl_no);
        printf("Route of Driver %d : %s\n", j, D[j].route);
        printf("Kms driven by Driver %d : %f\n\n", j, D[j].Kms);  
    }
}