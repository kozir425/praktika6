#include <stdio.h>

int main() {
    
    char lines[3][30] = {
        "/test.txt",
        "Привет",
        "Мир"
    };

    printf("Имя файла: %s\n", lines[0]);

    char content[100];
    int index = 0;
    for (int i = 1; i < 3; i++) { 
        int j = 0;
        while (lines[i][j] != '\0') {
            content[index++] = lines[i][j++];
        }
        content[index++] = '\n'; 
    }
    content[index] = '\0'; 

    printf("\nСодержимое файла:\n%s", content);

    char target[] = "Привет";
    int found = 0;
    int contentLength = 0;

    while (content[contentLength] != '\0') {
        contentLength++;
    }

    for (int i = 0; i <= contentLength - 6; i++) { 
        int match = 1; 
        for (int j = 0; j < 6; j++) {
            if (content[i + j] != target[j]) {
                match = 0; 
                break;
            }
        }
        if (match) {
            found = 1; 
            break;
        }
    }

    if (found) {
        printf("\nСлово \"%s\" найдено в тексте\n", target);
    } else {
        printf("\nСлово \"%s\" не найдено\n", target);
    }

    return 0;
}

