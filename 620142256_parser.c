#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void parse_log(const char *input_file, const char *output_file) {
    FILE *infile = fopen(input_file, "r");
    if (infile == NULL) {
        perror("Error opening input file");
        return;
    }

    FILE *outfile = fopen(output_file, "w");
    if (outfile == NULL) {
        perror("Error opening output file");
        fclose(infile);
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), infile)) {
        if (strstr(line, "Failed login") != NULL || strstr(line, "error") != NULL) {
            fprintf(outfile, "%s", line);
        }
    }

    fclose(infile);
    fclose(outfile);
    printf("Suspicious activity has been written to %s.\n", output_file);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <inputfile.txt> <outputfile.txt>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *input_filename = argv[1];
    const char *output_filename = argv[2];

    parse_log(input_filename, output_filename);
    return EXIT_SUCCESS;
}
~                          