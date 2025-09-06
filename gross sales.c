#include<stdio.h>


int main()
 {

    float net,gross,dis;
    printf("Enter gross sales - ");
    scanf("%f", &gross);

    if (gross > 20000)
    {
        dis = 0.15*gross;
        net = gross - dis;
        printf("Net sales after discount is-  %f\n", net);
    }
     else if (gross > 10000 && gross <= 20000)
    {
        dis = 0.1*gross;
        net = gross - dis;
        printf("Net sales after discount is: %f\n", net);
    }


else
    {
        dis = 0.05*gross;
        net = gross - dis;
        printf("Net sales after discount is: %f\n", net);
    }

    return 0;
}
