#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

void asc(int*,int sz);
void dsc(int*,int sz);
int main()
{
    pid_t pid;
    int *a,sz,i;

    printf("size of array");
    scanf("%d",&sz);
    a=(int*)malloc(sizeof(int));
    printf("enter element of%d size array",sz);
     for(i=0;i<sz;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i];)
     }
     pid=fork();
     switch(pid)
     {
        case -1;
        printf("error in fork");
        exit(-1);
        case 0;
        printf("child process");
        asc(a,sz);
        exit(0);
        printf("parentprocess");
        dsc(a,sz);
        exit(0);
     }
    return 0;
}
void asc(int *a ,int sz)
{
    int i, j ,temp;
    for(i=0;i<sz;i++){
        for(j=i+1;j<sz;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array in asc");
    for(i=0;i<sz;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void dsc(int *a ,int sz)
{
    int i, j ,temp;
    for(i=0;i<sz;i++){
        for(j=i+1;j<sz;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array in asc");
    for(i=0;i<sz;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}











