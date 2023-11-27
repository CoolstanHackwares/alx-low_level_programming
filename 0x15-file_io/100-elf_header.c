#include "main.h"

/**
 * print_error_msg - A program that prints error messages
 * @msg: the error message
 * This program conforms to the Betty documentation style
 **/

void print_error_msg(char *msg)
{
	int len;

	for (len = 0; msg[len]; len++)
		;

	write(STDERR_FILENO, msg, len);
	exit(98);
}

/**
 * print_type - A program that prints the type of the ELF file
 * @buffer: The buffer containing the type information
 * This program conforms to the Betty documentation style
 **/

void print_type(char *buffer)
{
	print_title("Type");

	switch (buffer[6])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", buffer[6]);
			break;
	}
	printf("\n");
}

/**
 * print_ABI_version - A program that prints the ABI version
 * @buffer: The buffer containing the ABI version
 * This program conforms to the Betty documentation style
 **/

void print_ABI_version(char *buffer)
{
	print_title("ABI Version");

	printf("%d", buffer[8]);
	printf("\n");
}

/**
 * print_entry - A program that prints the ELF entry point address
 * This program conforms to the Betty documentation style
 **/

void print_entry(void)
{
	Elf64_Ehdr h;
	int k = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		k = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[k])
			k--;
		printf("%x", p[k--]);
		for (; k >= 0; k--)
			printf("%02x", p[k]);
		printf("\n");
	}
	else
	{
		k = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[k])
			k++;
		printf("%x", p[k++]);
		for (; k <= len; k++)
			printf("%02x", p[k]);
		printf("\n");
	}
}

/**
 * print_OS_ABI - A program that prints the OS/ABI information for Elf Header
 * @buffer: The buffer containing the OS/ABI info
 * This program conforms to the Betty documentation style
 **/

void print_OS_ABI(char *buffer)
{
	print_title("OS/ABI");

	switch (buffer[7])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[7]);
	}
	printf("\n");
}

/**
 * print_version - A program that prints the version information for ELF Header
 * @buffer: The buffer containing the version info
 * This program conforms to the Betty documentation style
 **/

void print_version(char *buffer)
{
	print_title("Version");

	switch (buffer[6])
	{
		case EV_NONE:
			printf("0");
			break;
		case EV_CURRENT:
			printf("1 (current)");
			break;
		default:
			printf("%d <unknown: %%lx>", (int)buffer[6]);
	}

	printf("\n");
}

/**
 * print_data - A program that prints the data encoding info for ELF Header
 * @buffer: The buffer containing the data encoding info
 * This program conforms to the Betty documentation style
 */
void print_data(char *buffer)
{
	print_title("Data");

	switch (buffer[5])
	{
		case ELFDATANONE:
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[5]);
	}

	printf("\n");
}

/**
 * print_magic - A program that prints the magic bytes of the ELF Header
 * @buffer: The buffer containing the magic bytes
 * This program conforms to the Betty documentation style
 **/

void print_magic(char *buffer)
{
	int k;

	printf("  Magic:   ");
	for (k = 0; k < 16; k++)
		printf("%.2x ", buffer[k]);
	printf("\n");
}

/**
 * print_class - A program that prints the class (32-bit or 64-bit)
 * of the ELF header
 * @buffer: contains class information
 * This program conforms to the Betty documentation style
 **/

void print_class(char *buffer)
{
	print_title("Class");

	switch (buffer[4])
	{
		case ELFCLASSNONE:
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[4]);
	}
	printf("\n");
}

/**
 * print_title - A program that prints ELF Header titles
 * @title: the title
 * This program conforms to the Betty documentation style
 **/

void print_title(char *title)
{
	int size = 37;
	int len, k;

	printf("  ");
	printf("%s:", title);
	for (len = 0; title[len]; len++)
		;
	for (k = 0; k < size - 3 - len; k++)
		printf(" ");
}

/**
 * main - prints an ELF header
 * @argc: The count of arguments
 * @argv: The argument vector
 * Return: 0 on success, other values on failure
 * This program conforms to the Betty documentation style
 **/

int main(int argc, char **argv)
{
	int fd, readVal, k;
	char buffer[16];
	char match[4] = {0x7f, 'E', 'L', 'F'};

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: ", 7);
		write(STDERR_FILENO, argv[0], strlen(argv[0]));
		write(STDERR_FILENO, " <filename>\n", 12);
		exit(EXIT_FAILURE);
	}


	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error_msg("Could not open the file\n");

	readVal = read(fd, buffer, 16);
	if (readVal == -1)
		print_error_msg("Could not read from the file\n");

	for (k = 0; k < 4; k++)
	{
		if (buffer[k] != match[k])
			print_error_msg("Sorry, it's not an ELF file!\n");
	}

	printf("ELF Header:\n");
	print_magic(buffer);
	print_class(buffer);
	print_data(buffer);
	print_version(buffer);
	print_OS_ABI(buffer);
	print_ABI_version(buffer);
	print_type(buffer);
	print_entry();

	if (close(fd))
		print_error_msg("Could not close the file");

	return (0);
}

