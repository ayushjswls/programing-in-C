/*
         *
        **
       ***
      ****
     *****
*/
main()
{

    int j,i;
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
