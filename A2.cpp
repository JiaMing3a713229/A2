/* 
題目名稱:作業2
製作:呂家明 
修改/完成日期:2019/4/7
*/

#include<stdio.h>
#include<stdlib.h>
#define number 1000

int str_length(char[]);
void resever(int,char[]);

int main(void){
	char str[number];
	int mode=0;
	
	printf("請輸入字串，會反向輸出~\n");
	printf("輸入q結束程式\n");
	
	while(scanf("%s",&str)==1&&mode==0){
		resever(str_length(str),str);
		if(str_length(str)==1&&str[0]=='q'){
			printf("關閉程式\n");
			break;
		}
		printf("請輸入字串，會反向輸出~\n");
	}
	system("pause");
} 

int str_length(char str[]){
	int i=0;
	int length=0;

	while(str[i]!='\0'){    //字串長度 
		length+=1;	
		i+=1;
	}	

	return length;
}
void resever(int length,char str[]){
	int i;

	for(i=length-1;i>=0;i--){
		printf("%c",str[i]);
	}

	printf("\n");
}
