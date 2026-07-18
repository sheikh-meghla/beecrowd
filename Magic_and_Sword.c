#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int w,h,x,y;
        scanf("%d %d %d %d",&w,&h,&x,&y);

        char name[10];
        int level,cx,cy;

        scanf("%s %d %d %d",name,&level,&cx,&cy);

        int damage, radius;

        if(strcmp(name,"fire")==0)
        {
            damage = 200;
            if(level==1) radius=20;
            else if(level==2) radius=30;
            else radius=50;
        }
        else if(strcmp(name,"water")==0)
        {
            damage = 300;
            if(level==1) radius=10;
            else if(level==2) radius=25;
            else radius=40;
        }
        else if(strcmp(name,"earth")==0)
        {
            damage = 400;
            if(level==1) radius=25;
            else if(level==2) radius=55;
            else radius=70;
        }
        else
        {
            damage = 100;
            if(level==1) radius=18;
            else if(level==2) radius=38;
            else radius=60;
        }

        int left = x;
        int right = x + w;
        int bottom = y;
        int top = y + h;

        int closestX, closestY;

        if(cx < left)
            closestX = left;
        else if(cx > right)
            closestX = right;
        else
            closestX = cx;

        if(cy < bottom)
            closestY = bottom;
        else if(cy > top)
            closestY = top;
        else
            closestY = cy;

        int dx = cx - closestX;
        int dy = cy - closestY;

        int distance = dx*dx + dy*dy;

        if(distance <= radius*radius)
            printf("%d\n",damage);
        else
            printf("0\n");
    }

    return 0;
}