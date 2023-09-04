#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void elf_checker(unsigned char *file);
void write_magic(unsigned char *file);
void write_class(unsigned char *file);
void write_data(unsigned char *file);
void write_version(unsigned char *file);
void write_abiversion(unsigned char *file);
void write_os_abi(unsigned char *file);
void write_type(unsigned int file_type, unsigned char *file);
void write_entrypoint(unsigned long int e_entry, unsigned char *file);
void close_elf(int elf);
/**
 * elf_checker - Checks if a file is an ELF file.
 * @file: A pointer to content checked.
 */
void elf_checker(unsigned char *file)
{
int i;
for (i = 0; i < 4; i++)
{
if (file[i] != 127 &&
file[i] != 'E' &&
file[i] != 'L' &&
file[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * write_magic - Prints the magic numbers.
 * @file: A pointer to content checked.
 */
void write_magic(unsigned char *file)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", file[i]);

if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * write_class - Prints the class of an ELF header.
 * @file:  A pointer to content checked.
 */
void write_class(unsigned char *file)
{
printf("  Class:                             ");
switch (file[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", file[EI_CLASS]);
}
}
/**
 * write_data - Prints the data of an ELF header.
 * @file:  A pointer to content checked
 */
void write_data(unsigned char *file)
{
printf("  Data:                              ");
switch (file[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", file[EI_CLASS]);
}
}
/**
 * write_version - Prints the version of an ELF header.
 * @file:  A pointer to content checked.
 */
void write_version(unsigned char *file)
{
	printf("  Version:                           %d",
    file[EI_VERSION]);
switch (file[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
 * write_os_abi - Prints the OS/ABI of an ELF header.
 * @file:  A pointer to content checked.
 */
void write_os_abi(unsigned char *file)
{
printf("  OS/ABI:                            ");
switch (file[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", file[EI_OSABI]);
}
}

/**
 * write_abiversion - Prints the ABI version of an ELF header.
 * @file: A pointer to an array containing the ELF ABI version.
 */
void write_abiversion(unsigned char *file)
{
printf("  ABI Version:                       %d\n",
file[EI_ABIVERSION]);
}
/**
 * writfile_type - Prints the type of an ELF header.
 * @file_type: The ELF type.
 * @file:  A pointer to content checked.
 */
void writfile_type(unsigned int file_type, unsigned char *file)
{
if (file[EI_DATA] == ELFDATA2MSB)
file_type >>= 8;
printf("  Type:                              ");
switch (file_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", file_type);
}
}
/**
 * write_entrypoint - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @file:  A pointer to content checked.
 */
void write_entrypoint(unsigned long int e_entry, unsigned char *file)
{
printf("  Entry point address:               ");
if (file[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (file[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}
/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
 * main - Displays the information contained in ELF file.
 * @argc: The number of arguments 
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int open_fd, read_fd;
open_fd = open(argv[1], O_RDONLY);
if (open_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));/*allocate memory*/
if (header == NULL)
{
close_elf(open_fd);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
read_fd = read(open_fd, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
close_elf(open_fd);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

elf_checker(header->file);
printf("ELF Header:\n");
write_magic(header->file);
write_class(header->file);
write_data(header->file);
write_version(header->file);
write_os_abi(header->file);
write_abiversion(header->file);
write_type(header->file_type, header->file);
write_entrypoint(header->e_entry, header->file);
free(header);
close_elf(open_fd);
return (0);
}
