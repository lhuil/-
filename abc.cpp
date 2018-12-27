#include<stdio.h>
#include<string.h>
#define N 1005
int que[15];
struct node
{
    char name[25];
    int num;
    int sum;
}stu[N];
bool cmp(const node& a, const node$ b)
{
    if(a.sum==b.sum)
        return strcmp(a.name,b.name)< 0 ? 1:0;
    else
        return a.sum>b.sum;
}
int main()
{
    int stu_num,text_num,line,a,cnt;

    while(scanf("%d",&text_num)!EOF && stu_num){
        cnt=0;
        int i;
        scanf("%d%d",&text_num,&line);
        for(i=0;i<text_num;i++){
            scanf("%d",&que[i]);
        }
    }
}
