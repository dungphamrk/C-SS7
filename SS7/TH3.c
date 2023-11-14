#include <stdio.h>
int main()
{
    int oldMoney, time;
    float rate;
    printf("nhập số tiền gửi vào\n");
    scanf("%d", &oldMoney); 
    printf("Nhập số tháng gửi\n");
    scanf(" %d",&time);
    printf("Nhập tỉ lệ lãi xuất trên 1 tháng\n");
    scanf("%f", &rate);
   
    int moneyReceive=oldMoney;
    for (int i = 0; i < time; i++)
    {
        moneyReceive+=moneyReceive*rate;
    } 
    printf("Số tiền nhận được sau %d tháng là : %d",time,moneyReceive);
}