#include<stdio.h>
#include<stdlib.h>
void main()
{
int j,n,m,i;
char ch,in;
char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
srand(time(NULL));
m=rand()%25;
ch=str[m];
printf("\t\t\t\t\t\tPick a number between 1 and 100");
en();
printf("\t\t\t\t\t\t\tAdd the digits in the number");
en();
printf("\t\t\t\t\tSubstarct the sum of digits from the original number");
en();
printf("\t\t\t\t\tNow check the alphabet infront of the difference\n");
en();
for(i=0;i<100;i++)
	if(j<6)
	{
		if(i==0 || i==4 || i==9 || i==18 || i==27 || i==36 || i==45 || i==54 || i==63 || i==72 || i==81 || i==90 || i==97)
			{
				printf("%d--%c\t\t\t",i,ch);
			j++;
			}
		else
			{
				n=rand()%25;
				printf("%d--%c\t\t\t",i,str[n]);
				j++;
	}		}
	else
	{
		printf("\n");
		j=0;
		i=i-1;
	}
en();
printf("\n Did you get '%c' ?\n",ch);
}
void en()
{
char ch;
printf("\n\t\t\t\t\t\t\t >>>Press ENTER to continue<<<\n");
scanf("%c",&ch);
}




