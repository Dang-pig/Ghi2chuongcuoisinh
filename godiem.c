#include <stdio.h>
#include <math.h>

int main(){
	int cangodiem;
	printf("Mày có cần gỡ điểm ko? (1/0)\n");
	scanf("%d", &cangodiem);
	while(cangodiem != 0 && cangodiem != 1){
		printf("Mày có cần gỡ điểm ko? (1/0)\n");
		scanf("%d", &cangodiem);
	}
	if(cangodiem) printf("Ghi full tiêu đề + ghi nhớ 2 chương cuối");
	else printf("Ghi full tiêu đề 2 chương cuối");
}
