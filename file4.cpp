#include <bits/stdc++.h>
int main()
{
    FILE* fp;
    char feedback[100];

    int i;
    fp = fopen("gfg.txt","w");

    if(fp == NULL)
    {
        printf("\nThe file could not be opened");
        exit(1);
    }
    printf("\n Provide feedback on this article:");
    fgets(feedback,100,stdin);
    for(i = 0; i<feedback[i];i++)
    {
        fputc(feedback[i],fp);
    }
    if(ferror(fp))
    {
        printf("\nError writing in file");
        exit(1);
    }
    fclose(fp);
    return 0;
}

