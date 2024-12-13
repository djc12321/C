#include<stdio.h>

int main5()
{
    int y, m;
    // 普通年份和闰年的天数
    int month_normal[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int month_leap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const char* seasons[] = { "春天", "夏天", "秋天", "冬天" };  // 季节数组
    int days_in_month;

    // 输入年份和月份
    printf("请输入年份和月份：\n");
    scanf_s("%d%d", &y, &m);

    // 判断闰年
    int is_leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    // 选择对应年份的天数数组
    if (is_leap) {
        days_in_month = month_leap[m - 1];
    }
    else {
        days_in_month = month_normal[m - 1];
    }

    // 确定季节
    const char* season;
    if (m == 3 || m == 4 || m == 5) {
        season = seasons[0];  // 春天
    }
    else if (m == 6 || m == 7 || m == 8) {
        season = seasons[1];  // 夏天
    }
    else if (m == 9 || m == 10 || m == 11) {
        season = seasons[2];  // 秋天
    }
    else {
        season = seasons[3];  // 冬天
    }

    // 输出结果
    printf("%d年是%s，这个月是%s，有%d天\n", y, is_leap ? "闰年" : "普通年", season, days_in_month);

    return 0;
}
