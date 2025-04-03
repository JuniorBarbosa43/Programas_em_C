#include <stdio.h>

main()
{
    int a[10], val, i, existe;

    printf("Digite os valores do vetor:/n");
    for (i=0; i<10;i++)
        scanf("%d",&a[i]);


    printf("Digite o valor a procurar:");
    scanf("%d",&a[i]);

    existe = 0;
    for (i=0; i<10;i++)
    if(val==a[i])
    {
        existe = 1;
        break;
    }
    if (existe)
        printf("O valor %d existe no vetor!", val);
    else
        printf("O valor %d NAO existe no vetor!", val);

}