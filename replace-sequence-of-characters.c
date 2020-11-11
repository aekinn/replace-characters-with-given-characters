#include <stdio.h>
int main() {
// How to replace characters with given characters
char array[100];
char replace[3][3] = {{'e','e','u'},{'a','y','o'},{'j','j','e'}};  // The letters to be changed  are determined
int i, j, k;

printf("Enter your characters:  ");
fgets(array, sizeof(array), stdin);  // The second parameter of the "fgets" function is for size. Size of the array is 100

for(i=0; i<3; i++){
    for(j=0; array[j+1] != '\0'; j++){  // The loop continues until it encounters a null('\0') character.

            if((array[j] == replace[i][0]) && (array[j+1] == replace[i][1])){  // The letters are checked
                array[j] = replace[i][2];  // The letters are replaced with given letters

                for(k=j+1; array[k+1] != '\0'; k++){
                    array[k] = array[k+1];  // The array is arranged
                }
            }
    }
}

printf("Here New Characters:  ");
puts(array);
return 0;
}
