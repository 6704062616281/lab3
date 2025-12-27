#include<stdio.h>
int main(){
	int h,m,s,next;
	
	scanf("%d:%d:%d",&h,&m,&s);
	printf("Hour: %d \nMinute: %d \nSecond: %d\n",h,m,s);
	
	printf("Next minute: ");
	scanf("%d",&next);
	
	if (((m + next) / 60) < 1){
        m = (m + next);
    }else{
        h = h + (((m + next) / 60));
        h = h % 24;
        m = (m + next) % 60;
    }
	
	printf("Hour: %d \nMinute: %d \nSecond: %d",h,m,s);
}
