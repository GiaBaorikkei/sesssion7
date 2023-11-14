#include<stdio.h>
#include<math.h>
int main(){
	int i; 
	for(i = 100; i<1000;i++){
		int hundred, dozens, unit;
		hundred = i / 100, dozens = (i%100)/10, unit = i%10;
		if(pow(hundred,3)+pow(dozens,3)+pow(unit,3)==i){
			printf("%d la so Armstrong\n",i);
		}
	}
}
