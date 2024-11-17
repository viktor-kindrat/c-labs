#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char subject_teacher[MAX_LENGTH];
    char message[] = " Консультація відбудеться в середу на п’ятій парі.";
    char combined[MAX_LENGTH];

    printf("Введіть рядок з назвою предмету і прізвищем викладача: ");
    fgets(subject_teacher, sizeof(subject_teacher), stdin);

    subject_teacher[strcspn(subject_teacher, "\n")] = '\0';

    int length_subject_teacher = strlen(subject_teacher);
    printf("Кількість символів у введеному рядку: %d\n", length_subject_teacher);

    int length_message = strlen(message);
    printf("Кількість символів у повідомленні: %d\n", length_message);

    snprintf(combined, sizeof(combined), "%s%s", subject_teacher, message);

    printf("Сумарний рядок: %s\n", combined);
    printf("Кількість символів у сумарному рядку: %d\n", strlen(combined));

    return 0;
}
