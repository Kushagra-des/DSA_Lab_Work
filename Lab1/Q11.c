#include <stdio.h>
#include <stdlib.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int toSeconds(struct Time t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

struct Time toTime(int totalSeconds) {
    struct Time result;
    result.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    result.minutes = totalSeconds / 60;
    result.seconds = totalSeconds % 60;
    return result;
}

struct Time getDifference(struct Time t1, struct Time t2) {
    int seconds1 = toSeconds(t1);
    int seconds2 = toSeconds(t2);
    int diffSeconds = abs(seconds1 - seconds2);
    return toTime(diffSeconds);
}

int main() {
    struct Time t1, t2, diff;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    diff = getDifference(t1, t2);

    printf("Time Difference = %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
