#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int num1;
int num2;
double answer;
double answer1;

int solution(int num1, int num2) {
    answer1 = (double)num1 / (double)num2;
    printf("%f\n", answer1);
    answer = answer1 * 1000;
    printf("%d\n", (int)answer);
    return (int)answer;
}

int main()
{
    scanf("%d", &num1);
    scanf("%d", &num2);
    solution(num1, num2);
    printf("%d\n", (int)answer);
    return 0;
}

//////////////////////////////////////////////////////////////////
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    if (num1 == num2)
        return 1;
    else
        return -1;
}
/////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int denum1, int num1, int denum2, int num2) {
    int denum = denum1 * num2 + denum2 * num1;
    int num = num1 * num2;
    int least = 1;
    for (int i = 2; i <= denum || i <= num; i++) {
        if (denum % i == 0 && num % i == 0) {
            least = i;
        }
    }
    int* answer = (int*)malloc(2);
    answer[0] = denum / least;
    answer[1] = num / least;
    return answer;
}
//////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {

    int* answer = (int*)malloc(sizeof(int) * numbers_len);

    for (int i = 0; i < numbers_len; i++)
    {
        answer[i] = numbers[i] * 2;
    }

    return answer;
}