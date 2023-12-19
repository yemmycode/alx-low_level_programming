/* 
 * This program reads an ELF file and prints its header information
 * Functions: 
 * print_elf_magic: prints the magic bytes of the ELF header
 * print_elf_class: prints the class of the ELF file (32-bit or 64-bit)
 * print_elf_data: prints the data encoding of the ELF file (little endian or big endian)
 * print_elf_header: prints the version, OS/ABI, ABI version, type, and entry point of the ELF file
 * open_elf_file: opens an ELF file and returns a file descriptor
 * main: takes an ELF file name as an argument and calls the other functions
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

#define MAX_SIZE 1000
#define MAGIC "\x7fELF"

void print_elf_magic(const Elf64_Ehdr *elf_header) 
{
printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) 
{
printf("%02x ", elf_header->e_ident[i]);
}
printf("\n");
}

void print_elf_class(const Elf64_Ehdr *elf_header) 
{
printf("Class:   ");
switch (elf_header->e_ident[EI_CLASS]) 
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown\n");
break;
}
}

void print_elf_data(const Elf64_Ehdr *elf_header) 
{
printf("Data:    ");
switch (elf_header->e_ident[EI_DATA]) 
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Unknown\n");
break;
}
}

void print_elf_header(const Elf64_Ehdr *elf_header) 
{
print_elf_magic(elf_header);
print_elf_class(elf_header);
print_elf_data(elf_header);
printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
printf("OS/ABI:  %d\n", elf_header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("Type:    %d\n", elf_header->e_type);
printf("Entry point address: %lx\n", (unsigned long)elf_header->e_entry);
}

int open_elf_file(const char *filename) 
{
int fd = open(filename, O_RDONLY);
if (fd == -1) {
perror("Error opening file");
exit(98);
}
return (fd);
}

int main(int argc, char *argv[]) 
{
if (argc != 2) 
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

const char *filename = argv[1];
int fd = open_elf_file(filename);

Elf64_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) 
{
perror("Error reading ELF header");
close(fd);
exit(98);
}

if (memcmp(elf_header.e_ident, MAGIC, 4) != 0) 
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
exit(98);
}

print_elf_header(&elf_header);

close(fd);
return (0);
}
