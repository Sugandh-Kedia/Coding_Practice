#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    char data[MAX_SIZE];
};
void push(struct Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    s->top++;
    s->data[s->top] = c;
}
char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    char c = s->data[s->top];
    s->top--;
    return c;
}
int is_empty(struct Stack *s) {
    return s->top == -1;
}
void print_original_and_reversed(char *str) {
    struct Stack s;
    s.top = -1;
    for (int i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    while (!is_empty(&s)) {
        printf("%c", pop(&s));
    }
    printf("\n");
}
int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';
    print_original_and_reversed(str);
    if (is_palindrome(str)) {
        printf("The string is a palindrome\n");
    }
    else {
        printf("The string is not a palindrome\n");
    }
return 0;
}