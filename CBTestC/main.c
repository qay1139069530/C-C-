#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")

int main()
{
//    srand(time(NULL));
//    printf("Ëæ»úÊý×Ö  £º %d",rand());


   // int i=0;
  //  while(i<10){
   //     printf(" %d  \n" ,i);
  //      i++;
   // }

   //PlaySound(TEXT("e:\\1.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
   //Sleep(50000);

   mciSendString("open E:\\2.mp3 alias music",NULL,0,NULL);
   mciSendString("play music repeat",NULL,0,NULL);

   _getch();
    return 0;
}

void PlayMusic(const char* FileName){
    char cmdString[50] = "open ";



}

