#include<stdio.h>
int main()
{
	int i;
	printf("输入当年利润：");
	scanf("%d",&i);
	if (i>=0)
    {
	switch (i/100000)
	{
		case 0:printf("奖金：%.2f",i*0.1);break;
		case 1:printf("奖金：%.2f",i*100000*0.1+(i-100000)*0.075);break;
		case 2:
		case 3:printf("奖金：%.2f",100000*0.1+100000*0.075+(i-200000)*0.05);break;
	    case 4:
		case 5:printf("奖金：%.2f",100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03);break;
		case 6:
		case 7:
		case 8:	
		case 9:printf("奖金：%.2f",100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015);break;		
	    case 10:printf("奖金：%.2f",100000*0.1+100000*0.075+200000*0.05+200000*0.03+4000000*0.15+(i-1000000)*0.01);break;
	    default:printf("奖金：%.2f",100000*0.1+100000*0.075+200000*0.05+200000*0.03+4000000*0.15+(i-1000000)*0.01);break;
	}
    }
    else printf("输入错误");
	return 0;
}
