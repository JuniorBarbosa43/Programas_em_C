#include <stdio.h>

main()
{
    int a, b, temp_a, temp_b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    temp_a = a;
    temp_b = b;

    while (temp_a != 0 && temp_b != 0)
    {
        if (temp_a % 10 == temp_b % 10)
        {
            temp_a /= 10;
            temp_b /= 10;
        }
        else
        {
            break;
        }
    }

    if (temp_b == 0)
    {
        printf("Os ultimos digitos de a sao iguais aos digitos de b.\n");
    }
    else
    {
        printf("Os Ultimos digitos de a nao correspondem aos digitos de b.\n");
    }
}
