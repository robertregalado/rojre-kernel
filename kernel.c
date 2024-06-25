void kmain(void) {
    const char *str = "Hello, Kernel!";
    char *vidptr = (char*)0xb8000; // Video memory begins here.
    unsigned int i = 0;
    unsigned int j = 0;

    // Clear the screen
    while(j < 80 * 25 * 2) {
        vidptr[j] = ' ';
        vidptr[j+1] = 0x07; // Attribute byte for text
        j = j + 2;
    }

    j = 0;
    // Write the string to video memory
    while(str[i] != '\0') {
        vidptr[j] = str[i];
        vidptr[j+1] = 0x07; // Attribute byte for text
        ++i;
        j = j + 2;
    }
}
