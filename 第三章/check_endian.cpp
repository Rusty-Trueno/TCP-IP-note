#include <stdio.h>
 
// check system by char pointer 
int check_system()
{
        int n = 0x04030201;
 
        if (*(char *)&n == 0x01)
        {
                return 1;
        }
        else
        {
                return 0;
        }
 
        return 0;
}
 
// check system by union 
int check_system2()
{
        union check
        {
                int i;
                char c;
        } u;
 
        u.i = 0x04030201;
        if (u.c == 0x01)
        {
                return 1;
        }
        else
        {
                return 0;
        }
 
        return 0;
}
 
int main(int argc, char *argv[])
{
 
      	if (check_system() == 1)
//        if (check_system2() == 1)
        {
                printf("little endian.\n");
        }
        else
        {
                printf("big endian.\n");
        }
 
        return 0;
}
