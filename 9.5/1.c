/*
 * @Author: PlanC
 * @Date: 2020-09-05 09:02:38
 * @LastEditTime: 2020-09-05 09:51:27
 * @FilePath: \Practical-Training-Neusoft-Tianjin\9.5\1.c
 */

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    while (1) {
        printf("input \"a\" and \"b\"\n");
        scanf("%d %d", &a, &b);
        printf("a = %d, b = %d, ", a, b);
        if (a > 10 && b > 10) {
            printf("all over 10, ");
        }
        if (a > 10 || b > 10) {
            printf("NOT all over 10, ");
        }
        if (!(a == b)) {
            printf("a != b.\n");
        }
        else {
            printf("a == b.\n");
        }
    }
    return 0;
}
