#include<stdio.h>
#include<bits/stdc++.h>
#include<windows.h>
int main(){
    int p;
    printf("请输入鼠标点击的速度（次/分钟），可以为1，10，100，1000\n");
    while(1){
        scanf("%d",&p);
        if(p==1)  p=1000;
        else if(p==10)  p=100;
        else if(p==100)  p=10;
        else if(p==1000)  p=1;
        else{
            printf("请重新输入\n");
            continue;
        }
        break;
    }
    printf("按F7键开始，按F9键停止并结束程序\n");
    while(1){
        if(GetAsyncKeyState(VK_F7)){
            while(1){
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
                Sleep(p);
                if(GetAsyncKeyState(VK_F9))  exit(0); 
            }
        }
    }
    return 0;
}
