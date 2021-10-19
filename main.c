#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"
#include "get_next_line.h"
#include "limits.h"

int	main(int argc, char **argv)
{
	char	*a;
	int	fd;

	printf("%d\n",FOPEN_MAX);
    fd = open("/home/aregenia/Рабочий стол/get_next_line/gnlTester/files/big_line_no_nl", O_RDONLY);
    while((a = get_next_line(fd))) {
        printf("%s", a);
        free(a);
        a = NULL;
    }
//	if (argc == 2)
//	{
//		fd = open(argv[1],O_RDONLY);
//        	if (fd == -1)
//        	{
//            		printf("ERROR FILE");
//            		return (1);
//        	}
//		while ((a = get_next_line(fd))) {
//            printf("%s", a);
//            free(a);
//        }
//    }
//	if (argc == 1)
//	{
//		while ((a = get_next_line(1)))
//            printf("%s", a);
//    }
	free(a);
	return (0);
}
