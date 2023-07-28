#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main() {
    char n1[] = "12345678901234567890";
    char n2[] = "98765432109876543210";
    char result[100];

    char *res = infinite_add(n1, n2, result, sizeof(result));
    if (res != NULL) {
        printf("Result: %s\n", res);
    } else {
        printf("The result cannot be stored in the buffer.\n");
    }

    return 0;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    int carry = 0;
    int i, j, k;
    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    if (size_r <= len1 || size_r <= len2) {
        return 0;
    }

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j++;
        k++;

        if (k >= size_r - 1) {
            return 0;
        }
    }

    r[k] = '\0';

    int start, end;
    start = 0;
    end = k - 1;
    while (start < end) {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
        start++;
        end--;
    }

    return r;
}

