#include<stdio.h>
#include<bits/stdc++.h>
#include<windows.h>
int main(){
    int p;
    printf("Please enter the speed of mouse clicks (times per minute), which can be 1, 10, 100, or 1000.\n");
    while(1){
        scanf("%d",&p);
        if(p==1)  p=1000;
        else if(p==10)  p=100;
        else if(p==100)  p=10;
        else if(p==1000)  p=1;
        else{
            printf("Please re-enter.\n");
            continue;
        }
        break;
    }
    printf("Press the F7 key to start and press the F9 key to stop and end the program.\n");
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
