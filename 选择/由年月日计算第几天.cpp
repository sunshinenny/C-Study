#include<stdio.h>
int main()
{
	int y,m,d,days,all;
	printf("Input a date(eg:2016.5.1):");
	scanf("%d.%d.%d",&y,&m,&d);
	if (d<=31&&d>=1)
{

	if (y%4==0&&(y%100!=0||y%400==0))
	{

	  
			
        switch (m)
	   {
		case 1:days=0;break;
		case 2:days=31;break;
		case 3:days=60;break;
		case 4:days=91;break;
		case 5:days=122;break;
		case 6:days=152;break;
		case 7:days=183;break;
		case 8:days=214;break;
		case 9:days=244;break;
		case 10:days=275;break;
		case 11:days=305;break;
		case 12:days=335;break;
		default:printf("输入错误"); 
	   }
	  if (m==2&&(d>=1&&d<=29)||m!=2)
	  	printf("总共过了%d天",all=days+d);
	  else printf("输入错误");  
    }
    else 
	{

	   
	switch (m)
	{
		case 1:days=0;break;
		case 2:days=31;break;
		case 3:days=59;break;
		case 4:days=90;break;
		case 5:days=121;break;
		case 6:days=151;break;
		case 7:days=182;break;
		case 8:days=213;break;
		case 9:days=243;break;
		case 10:days=274;break;
		case 11:days=304;break;
		case 12:days=334;break;
		default:printf("输入错误"); 
	}
	   if (m==2&&(d>=1&&d<=28)||m!=2)
	   	  	printf("总共过了%d天",all=days+d);
	 else printf("输入错误");
    }
}
    else printf("输入错误");
    

	return 0;
}
