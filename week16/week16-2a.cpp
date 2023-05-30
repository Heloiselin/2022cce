#include <stdio.h> ///§PÂ_¤j¤p
int f(int a,int b){
	if(a>b)return 1;
	if(a==b)return 0;
	if(b>a)return -1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
