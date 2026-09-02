#include <stdio.h>

int main() {
    int score = 10, attempts = 0;

start:
    if (attempts > 3) goto end;

    int bonus = 5;

    // Evaluate carefully: Operator precedence and short-circuiting
    if (score > 15 && ++attempts || score == 10) {
        score += bonus;

        switch (score) {
            case 15:
                score += 5;
            case 20:
                score *= 2;
                break;
            default:
                score = 0;
        }
    }

    attempts++;
    goto start;

end:
    printf("Final Score: %d\n", score);
    return 0;
}