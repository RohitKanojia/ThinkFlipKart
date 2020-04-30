# include<stdio.h>

int sum(int a int b){
	return (a+b);
}

int mul(int a, int b){
	return a*b;
}

int fac(int a){
	if(a  == 1 ||  a == 0){
		return 1;
	}
	return a*fac(a - 1);
}

int main(){
  for(int i = 1; i < 11; i++){
    printf("%d",i);
    int a = fac(i);
    printf("%d\n",a);		
  }
}
