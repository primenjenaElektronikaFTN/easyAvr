#include <mega16.h>

void my_delay(int num)
{
    int i, j;
    for( i=0;i<num;i++)
        for( j=0;j<num;j++)
            {};
}

void main(void)
{
	
	// Initialization
    DDRA |= (1<<DDA0) | (1<<DDA1) | (1<<DDA2) | (1<<DDA3) | (1<<DDA4) | (1<<DDA5) | (1<<DDA6) | (1<<DDA7);
	
    while(1)
    {
        // Please write your application code here
        PORTA |= (1<<PORTA7);
		
        my_delay(1000);
		
        PORTA &= ~(1<<PORTA7);

        my_delay(1000);

    }
}
