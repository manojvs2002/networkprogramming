#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char res[100];
void sender()
{
	int n,i,len;
	char frm[100],l[100];
	printf("Enter the number of frames\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the frame %d\n",i+1);	
		scanf("%s",&frm);
		len=strlen(frm);
		sprintf(l,"%d",len);
		strcat(l,frm);
		strcat(res,l);
	}
	printf("The final message is %s\n",res);
}
void reciever()
{
	int len,i,j;
	printf("Received frame \n");
	for(i=0;i<strlen(res);i++)
	{
		len=res[i]-'0';
		for(j=i+1;j<=(i+len);j++)
			printf("%c",res[j]);
		i=i+len;
		printf("\n");
	}
}
void main()
{
	sender();
	reciever();
	return 0;
}
#include <stdio.h>
#include <string.h>
void main()
{
    char frame[50][50], str[50][50];
    char flag[10];
    strcpy(flag, "flag");
    char esc[10];
    strcpy(esc, "esc");
    int i, j, k = 0, n;
    strcpy(frame[k++], "flag");
    printf("Enter length of String : \n");
    scanf("%d", &n);
    printf("Enter the String: ");
    for (i = 0; i <= n; i++)
    {
        gets(str[i]);
    }
    printf("\nYou entered :\n");
    for (i = 0; i <= n; i++)
    {
        puts(str[i]);
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        if (strcmp(str[i], flag) != 0 && strcmp(str[i], esc) != 0)
        {
            strcpy(frame[k++], str[i]);
        }
        else
        {
            strcpy(frame[k++], "esc");
            strcpy(frame[k++], str[i]);
        }
    }
    strcpy(frame[k++], "flag");
    printf("------------------------------\n\n");
    printf("Byte stuffing at sender side:\n\n");
    printf("------------------------------\n\n");
    for (i = 0; i < k; i++)
    {
        printf("%s\t", frame[i]);
    }
}


