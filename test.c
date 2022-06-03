#include<stdio.h>
#include<math.h>
int main(void)
{
int y,m,d,h,mi,s,i;
int A=0;
char a[A][6];
#define N=50;
int x,y,plus;
{
    //データを10個に縛る
    for(A=0;A<10;A++){
    //時間入力
    printf("入力");
    scanf("%d",&i);
    //時間の測定幅
    for(x=i+plus;plus<N;plus++){
        if(x==y){
        }else{
            if(plus==N){}else{
                //pingのエラーを伝える
                printf("エラー");
                break;
            }
        }
    }

    //要素の取り出し
    s=i%100;
    i=i/100;
    mi=i%100;
    i=i/100;
    h=i%100;
    i=i/100;
    d=i%100;
    i=i/100;
    m=i%100;
    y=i/100;
    a[A][0]=s;
    a[A][1]=mi;
    a[A][2]=h;
    a[A][3]=d;
    a[A][4]=m;
    a[A][5]=y;
    }

}
}