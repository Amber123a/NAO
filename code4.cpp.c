#include <stdio.h>

int main (void)
{
    int Mach, Stu, cnt = 0;
    int temp = 0;
    printf("请输入扫码取件机数量和学生数量（用空格隔开）：\n");
    scanf("%d %d",&Mach, &Stu);
    int mach[Mach], stu[Mach], arr[Stu];      //数组stu用于记录取货机前学生的剩余快递件数
    
    //初始化上述数组
    for (int i = 0; i < Mach; i++)
    {
        mach[i] = 0;
        stu[i] = 0;
    }
    for (int i = 0; i < Stu; i++)
    {
        arr[i] = 0;
    }
    int num = Mach;
    printf("请输入每个同学的快递件数：\n");
    for (int i = 0; i < Stu; i++)
    {
        scanf("%d",&arr[i]);
    }
    //初始化数组stu
    for (int i = 0; i < Mach; i++)
    {
        stu[i] = arr[i];
    }

    //主功能区
    for(;;){

        //设定取货机的状态，1表示占用中，0表示空闲中
        for (int i = 0; i < Mach; i++) {
            if (stu[i] != 0) {
                mach[i] = 1;
            } else if (stu[i] == 0) {
                mach[i] = 0;
            }
        }

        //取货机前的同学取一次货并记录时间
        for (int j = 0; j < Mach; j++) {
            if (mach[j] != 0) {
                stu[j] = stu[j] - 1;
            }   else if (mach[j] == 0){
                    if(num + 1 <= Stu){
                    stu[j] = arr[num + 1];
                    num++;
                    }
                }
        }
        cnt++;

        //遍历每个人的剩余快递件数，并判断是否应该结束程序

        temp = 0;
        for (int k = 0; k < Mach; k++) {
            if (stu[k] != 0){
                temp++;
            }
        }
        if (temp == 0) break;
    }

    printf("取完所有快递总用时为%d秒",cnt);
    return 0;
}
