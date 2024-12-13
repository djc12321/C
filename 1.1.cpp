#include<stdio.h>

int main5()
{
    int y, m;
    // ��ͨ��ݺ����������
    int month_normal[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int month_leap[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const char* seasons[] = { "����", "����", "����", "����" };  // ��������
    int days_in_month;

    // ������ݺ��·�
    printf("��������ݺ��·ݣ�\n");
    scanf_s("%d%d", &y, &m);

    // �ж�����
    int is_leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

    // ѡ���Ӧ��ݵ���������
    if (is_leap) {
        days_in_month = month_leap[m - 1];
    }
    else {
        days_in_month = month_normal[m - 1];
    }

    // ȷ������
    const char* season;
    if (m == 3 || m == 4 || m == 5) {
        season = seasons[0];  // ����
    }
    else if (m == 6 || m == 7 || m == 8) {
        season = seasons[1];  // ����
    }
    else if (m == 9 || m == 10 || m == 11) {
        season = seasons[2];  // ����
    }
    else {
        season = seasons[3];  // ����
    }

    // ������
    printf("%d����%s���������%s����%d��\n", y, is_leap ? "����" : "��ͨ��", season, days_in_month);

    return 0;
}
