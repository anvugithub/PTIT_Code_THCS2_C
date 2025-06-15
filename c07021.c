#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char name[100];
    double g1,g2,g3,total;
} student;

student a[500];
int cnt = 0;

int cmp(const void *a, const void *b){
    student *s1 = (student*)a;
    student *s2 = (student*)b;
    if(s1->total != s2->total) return (s1->total > s2->total) ? 1 : -1;
    return s1->id - s2->id;
}

void add(){
    int n; scanf("%d",&n); getchar();
    for(int i = 0; i < n; i++){
        a[cnt].id = cnt + 1;

        fgets(a[cnt].name,sizeof(a[cnt].name),stdin);
        a[cnt].name[strcspn(a[cnt].name,"\n")] = 0;

        scanf("%lf%lf%lf",&a[cnt].g1,&a[cnt].g2,&a[cnt].g3); getchar();
        a[cnt].total = a[cnt].g1 + a[cnt].g2 + a[cnt].g3;

        cnt++;
    }
    printf("%d\n",n);
}

void update(){
    int id; scanf("%d",&id); getchar();
    int i = id - 1;

    fgets(a[i].name,sizeof(a[i].name),stdin);
    a[i].name[strcspn(a[i].name,"\n")] = 0;

    scanf("%lf%lf%lf",&a[i].g1,&a[i].g2,&a[i].g3); getchar();
    a[i].total = a[i].g1 + a[i].g2 + a[i].g3;

    printf("%d\n",id);
}

void show(){
    qsort(a, cnt, sizeof(student), cmp);
    for(int i = 0; i < cnt; i++) printf("%d %s %.1lf %.1lf %.1lf\n",a[i].id,a[i].name,a[i].g1,a[i].g2,a[i].g3);
}

int main(){
    while(1){
        int opt;
        if(scanf("%d",&opt)!=1) break;
        getchar();
        if(opt==1) add();
        else if(opt==2) update();
        else if(opt==3){
            show();
            break;
        }
    }
}
