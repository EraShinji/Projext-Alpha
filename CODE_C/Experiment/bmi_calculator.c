#include <stdio.h>
#include <string.h>
#include <math.h>
void instruction(void);
int main()
{
    instruction();
    printf("PLEASE PRESS ANY KET TO CONTINUE\n");
    getchar();
    printf("PLEASE ENTER YOUR WEIGHT(UNIT:KG)");
    float weight;
    scanf("%f",&weight);
    printf("PLEASE ENTER YOUR HEIGHT(UNIT:M)");
    float height;
    scanf("%f",&height);
    printf("CALCULATING...\n");
    float square;
    square = height*height;
    float result;
    result = weight/square;
    printf("YOUR BMI INDEX IS %0.2f.\n",result);
    while (result < 20)
    {
        printf("your result is good");
        return 0;
    }
    return 0;
}
void instruction(void)
{
    printf("WELCOME USE BMI CALCULATOR PROGRAMME\n");
    printf("THE PROGRAMME ALLOW OPEN CC OPEN RESOURCE SIGNMENT\n");
    printf("THE PROGRAMME IS DEVELOPING,IF YOU FIND ANY PROBLEMS OR BUGS IN USING PHRASE,SEND THE EMAIL TO aleclanned2858655626@gmail.com\n ");
}