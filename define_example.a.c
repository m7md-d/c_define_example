#ifdef loop1
for (int y = 1; y <= 10; y++)
{
    #ifndef loop2
    printf("y = %d\n", y); /* if loop1 is on and loop2 is off */
    #endif
    #endif
    #ifdef loop2
    #include "define_example.b.c" /* if loop 2 is on this code will run */
    #endif
    #ifdef loop1
}
#endif
