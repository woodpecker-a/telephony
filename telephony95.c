#include <stdio.h>
struct telephony
{
    int time;
    int length;
    int etime;
    int f,t;
} tp[5];

int main()
{
    int c=1, i=0, ctime,temp,mlink,process,complete,block,busy,time[10],ltime,d;

    printf("\nEnter current time: (HHMM) ");
    scanf("%d",&ctime);
    time[0]=ctime;
    printf("\nEnter Max link: ");
    scanf("%d",&mlink);

    printf("\n\nEnter call in progress record\n\n");

    printf("\nTotal process: ");
    scanf("%d",&process);
    printf("\nTotal Complete: ");
    scanf("%d",&complete);
    printf("\nTotal block: ");
    scanf("%d",&block);
    printf("\nTotal busy: ");
    scanf("%d",&busy);

    while(c==1)
    {
        printf("\nCall from: ");
        scanf("%d",&tp[i].f);
        printf("To");
        scanf("%d",&tp[i].t);
        printf("End Time: ");
        scanf("%d",&tp[i].etime);
        tp[i].length = tp[i].etime-ctime;


        i++;
        i=d;


        printf("\n\nPress 1 to continue\nPress 0 to go next stage!");
        scanf("%d",&c);
        printf("\n\n");
    }



    int j=1;

    while(c==0)
    {
        printf("Enter Arrival time:");
        scanf("%d", &tp[i].time);
        time[j]=tp[i].time;

        printf("Length of call: ");
        scanf("%d", &tp[i].length);

        tp[j].etime = tp[i].time+tp[i].length;
        ltime=tp[i].etime;

        printf("\nConnected lines: ");
        printf("\nFrom");
        scanf("%d",&tp[i].f);
        printf("->To");
        scanf("%d",&tp[i].t);

        printf("\n");
        printf("Press 0 to continue: ");
        scanf("%d",&c);

        temp=tp[i].t;
        i++;
        j++;

    }

    i=0;

    while(time[i]!=ltime)
    {
        printf("\n\n-----------------------------------------------\n\n");

        printf("\n\n");
        printf("Clock: %d",time[i]);
        printf("\nCall in progress: ");
        printf("\nFrom: %d",tp[i].f);
        printf("\nTo: %d",tp[i].t);
        printf("\nEnd Time: %d",tp[i].etime);
        printf("\n\n");

        process++;
        if(mlink<d)
            block++;
        /*
        busy
        */
        else
            complete++;

            i++;

            printf("Process: %1d | Complete: %1d | Blocked: %1d | Busy: %1d",process,complete,block,busy);

        printf("\n\n-----------------------------------------------\n\n");


    }


    return 0;
}

