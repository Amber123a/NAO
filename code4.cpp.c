#include <stdio.h>

int main (void)
{
    int Mach, Stu, cnt = 0;
    int temp = 0;
    printf("������ɨ��ȡ����������ѧ���������ÿո��������\n");
    scanf("%d %d",&Mach, &Stu);
    int mach[Mach], stu[Mach], arr[Stu];      //����stu���ڼ�¼ȡ����ǰѧ����ʣ���ݼ���
    
    //��ʼ����������
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
    printf("������ÿ��ͬѧ�Ŀ�ݼ�����\n");
    for (int i = 0; i < Stu; i++)
    {
        scanf("%d",&arr[i]);
    }
    //��ʼ������stu
    for (int i = 0; i < Mach; i++)
    {
        stu[i] = arr[i];
    }

    //��������
    for(;;){

        //�趨ȡ������״̬��1��ʾռ���У�0��ʾ������
        for (int i = 0; i < Mach; i++) {
            if (stu[i] != 0) {
                mach[i] = 1;
            } else if (stu[i] == 0) {
                mach[i] = 0;
            }
        }

        //ȡ����ǰ��ͬѧȡһ�λ�����¼ʱ��
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

        //����ÿ���˵�ʣ���ݼ��������ж��Ƿ�Ӧ�ý�������

        temp = 0;
        for (int k = 0; k < Mach; k++) {
            if (stu[k] != 0){
                temp++;
            }
        }
        if (temp == 0) break;
    }

    printf("ȡ�����п������ʱΪ%d��",cnt);
    return 0;
}
