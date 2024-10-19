#include <stdio.h>
//冒泡排序（情景为对身高排序）
int main()
{
    int a, b, c, d, e, f, g, x, y, z;
    printf("请输入身高:\n");
    //输入所需排列的十个人的身高
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &x, &y, &z);  
    int arr[10] = {a, b, c, d, e, f, g, x, y, z};
    //对于十个数总共需要总的排序10-1=9次
    for (int i = 0; i < 9; i++)
    {   //下标从0开始故需减去1
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {   //若前一项大于后一项，则交换两者位置
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }      
        }
    }
    //输出
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}