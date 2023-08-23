#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for the dog structure
    dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
    if (newDog == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }
    
    // Allocate memory for the name and owner strings and copy the provided strings
    newDog->name = strdup(name);
    newDog->owner = strdup(owner);
    
    // Check if memory allocation for name or owner failed
    if (newDog->name == NULL || newDog->owner == NULL) {
        // Free any allocated memory and return NULL if there's an error
        free(newDog->name);
        free(newDog->owner);
        free(newDog);
        return NULL;
    }
    
    newDog->age = age;
    
    return newDog;
}

int main() {
    // Create a new dog
    dog_t *myDog = new_dog("Buddy", 3.5, "Alice");
    
    if (myDog != NULL) {
        printf("Dog's name: %s\n", myDog->name);
        printf("Dog's age: %.1f\n", myDog->age);
        printf("Dog's owner: %s\n", myDog->owner);
        
        // Don't forget to free the memory when done with the dog
        free(myDog->name);
        free(myDog->owner);
        free(myDog);
    } else {
        printf("Failed to create a new dog.\n");
    }
    
    return 0;
}
