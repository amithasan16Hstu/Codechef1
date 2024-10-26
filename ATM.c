#include <stdio.h>
int main()
{
    int x;
    float y;
    float sub = 0;

    scanf("%d %f", &x, &y);
    if (x % 5 == 0)
    {
        
        sub = y - (float)x - 0.50;
            if(sub<0){
            printf("%0.2f\n", y);
        }
        else
        {
            printf("%0.2f\n", sub);
        }
    }
    else
    {
        printf("%0.2f\n",y);
    }
}

// #include <stdio.h>
// int main()
// {
//     int a;
//     float b;
//     scanf("%d", &a);
//     scanf("%f", &b);
//     if (a % 5 == 0)
//     {
//         float c;
//         c = b - (float)a - 0.5;
//         if (c < 0)
//             printf("%.2f", b);
//         else
//             printf("%.2f", c);
//     }
//     else
//     {
//         printf("%.2f", b);
//     }
// }
