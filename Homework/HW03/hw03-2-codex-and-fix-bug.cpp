//TODO: #9 Fix bug and arrange code in CODEX pattern.
int main() {
    float a;
    float b = 3.0;
    int i = 0;
    int _1 = 0;

    printf("%d ", _1);

    if (_1 != 0) {
        printf(" ok ");
    } else {
        while (i <= 5) {
            printf(" not-okay-%d ", ++i);
        }
    }

    for (i = 3; i < 10; i += 1) {
        if (i % 2 == (_1 ? 1 : 0)) {
            printf(" see see ");
        }
    }

    printf("haha\n");
	
    return 0;
}


