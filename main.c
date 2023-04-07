#include <stdio.h>
#include <string.h>

int main()
{
    printf("Gol yorulumciyisi\n");
    for(int i=0;i<17;i++)
    {
        printf("-");
    }
    printf("\n");
    while(1)
    {
        char cmd[100];
        char output[100];
        printf("Enter komutu : ");scanf("%s",&cmd);
        int i=0;
        int j=0;
        if(cmd[i]=='G' || (cmd[i] == '(' && cmd[i] == ')') || (cmd[i] == '(' && cmd[i] == 'l' && cmd[i] == ')'))
        {
            for (i=0;i<strlen(cmd);i++)
            {
                if (cmd[i] == 'G')
                {
                    output[j] = 'G';
                    j++;
                }
                else if (cmd[i] == '(' && cmd[i+1] == ')')
                {
                    output[j] = 'o';
                    i++;
                    j++;
                }
                else if (cmd[i] == '(' && cmd[i+1] == 'l' && cmd[i+2] == ')')
                {
                    output[j] = 'l';
                    i+=2;
                    j++;
                }
                output[j]= '\0';
            }
            printf("Yorumlanmis cikti : %s\n",output);
            break;
        }
        else
        {
            printf("Girilebilecek tek karakter 'G' veya '()' veya '(l)\n");
            continue;
        }
    }

    return 0;
}
