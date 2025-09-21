#include <stdio.h>
#include <string.h>

// XOR operation between two binary strings
void xorOperation(char *a, char *b, char *result, int len) {
    for (int i = 0; i < len; i++) {
        result[i] = (a[i] == b[i]) ? '0' : '1';
    }
    result[len] = '\0';
}

// CRC division function: returns remainder
void crcDivision(char *dividend, char *divisor, char *remainder) {
    int n = strlen(divisor);
    char temp[100];
    strncpy(temp, dividend, n);
    temp[n] = '\0';
    int len = strlen(dividend);

    for (int i = n; i <= len; i++) {
        if (temp[0] == '1') {
            char xored[100];
            xorOperation(temp, divisor, xored, n);
            for (int j = 0; j < n - 1; j++)
                temp[j] = xored[j + 1];
        } else {
            // XOR with 0s (no change)
            for (int j = 0; j < n - 1; j++)
                temp[j] = temp[j + 1];
        }
        temp[n - 1] = dividend[i];
    }
    temp[n - 1] = '\0';
    strcpy(remainder, temp);
}

int main() {
    char data[100], divisor[100], appendedData[200], remainder[100], codeword[200];
    printf("Enter data bits: ");
    scanf("%s", data);
    printf("Enter divisor (generator): ");
    scanf("%s", divisor);

    // Append zeros to data
    int dataLen = strlen(data);
    int divisorLen = strlen(divisor);
    strcpy(appendedData, data);
    for (int i = 0; i < divisorLen - 1; i++)
        appendedData[dataLen + i] = '0';
    appendedData[dataLen + divisorLen - 1] = '\0';

    // Find remainder (CRC bits)
    crcDivision(appendedData, divisor, remainder);

    // Make codeword (data + remainder)
    strcpy(codeword, data);
    strcat(codeword, remainder);
    printf("Transmitted Codeword: %s\n", codeword);

    // Simulate receiver
    char received[200], recvRem[100];
    printf("Enter received codeword: ");
    scanf("%s", received);

    crcDivision(received, divisor, recvRem);

    int error = 0;
    for (int i = 0; i < divisorLen - 1; i++) {
        if (recvRem[i] != '0') {
            error = 1;
            break;
        }
    }
    if (error)
        printf("Error detected in received codeword.\n");
    else
        printf("No error detected in received codeword.\n");

    return 0;
}
