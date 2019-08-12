#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1;

void des()
{
printf("\n\n\n\t\t  %c | %c | %c ",a[0],a[1],a[2]);
printf("\n\t\t  --|---|---");
printf("\n\t\t  %c | %c | %c ",a[3],a[4],a[5]);
printf("\n\t\t  --|---|---");
printf("\n\t\t  %c | %c | %c ",a[6],a[7],a[8]);
}




void input()
{
int i;
char ch;
printf("\n\n\t Enter the position : ");
scanf("%c",&ch);
   if(k==0)
   {
     for(i=0;i<=8;i++)
     {
	if(a[i]==ch)
	 {
	   a[i]='X';
	   k=1;
	   break;
	 }
     }
   }
    else
    {
	 for(i=0;i<=8;i++)
	  {
	    if(a[i]==ch)
	     {
	      a[i]='0';
	      k=0;
	      break;
	     }
	  }
     }
}

int check()
{
      if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
return (1);
else if (a[0]=='X'&&a[3]=='X'&&a[6]=='X')
return (1);
else if (a[0]=='X'&&a[4]=='X'&&a[8]=='X')
return (1);
else if (a[1]=='X'&&a[4]=='X'&&a[7]=='X')
return (1);
else if (a[2]=='X'&&a[5]=='X'&&a[8]=='X')
return (1);
else if (a[2]=='X'&&a[4]=='X'&&a[6]=='X')
return (1);
else if (a[3]=='X'&&a[4]=='X'&&a[5]=='X')
return (1);
else if (a[6]=='X'&&a[7]=='X'&&a[8]=='X')
return (1);


    else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
return (2);
else if (a[0]=='0'&&a[3]=='0'&&a[6]=='0')
return (2);
else if (a[0]=='0'&&a[4]=='0'&&a[8]=='0')
return (2);
else if (a[1]=='0'&&a[4]=='0'&&a[7]=='0')
return (2);
else if (a[2]=='0'&&a[5]=='0'&&a[8]=='0')
return (2);
else if (a[2]=='0'&&a[4]=='0'&&a[6]=='0')
return (2);
else if (a[3]=='0'&&a[4]=='0'&&a[5]=='0')
return (2);
else if (a[6]=='0'&&a[7]=='0'&&a[8]=='0')
return (2);


else
 return (3);

}
void final()
{
int var;
var = check();
if(var == 1)
{
printf("\n\t\t\tPLAYER 1 WON");
end=0;
}
else if (var==2)
{
printf("\n\t\t\tPLAYER 2 WON");
end=0;
}
else;
}

void main ()
{
clrscr();
printf("\n\n\t\t\t\tTIC-TAC");
des();
while(end)
{
input();
clrscr();
printf("\n\n\t\t\t\tTIC-TAC");
des();
final();
}
getch();
}