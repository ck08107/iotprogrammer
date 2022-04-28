#include <stdio.h>
#include <stack.h>
#include <test.h>

int main(){
    MAZE maze1;

    maze1.map = map1;
    maze1.stack = malloc(sizeof(STACK));
    init_stack(maze1.stack);
    maze1.here_r = 1;
    maze1.here_c = 0;
    
    while(1){
	// 1. 현재위치에서 사방을 초음파센서로 확인 후 1 or 0을 할당
	// 2. 로봇청소기 이동
	run();
