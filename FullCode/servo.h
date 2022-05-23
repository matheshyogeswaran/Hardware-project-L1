void servo1ninety(void)
{
	DDRC = 0x80; //Makes PC7 output pin
	PORTC = 0x00;
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTC = 0x80;
		_delay_us(1000);
		PORTC = 0x00;
		
		_delay_ms(2000);
		
		//Rotate Motor to 90 degree
		PORTC = 0x80;
		_delay_us(1500);
		PORTC = 0x00;
		
		_delay_ms(2000);
		
		break;
	}
}

void servo1zero(void)
{
	DDRC = 0x80; //Makes PC7 output pin
	PORTC = 0x00;
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTC = 0x80;
		_delay_us(1000);
		PORTC = 0x00;
		
		_delay_ms(2000);
		
		break;
	}
}


void servo2ninety(void)
{
	DDRB = 0x04; //Makes PB2 output pin
	PORTB = 0x04;
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTB = 0x04;
		_delay_us(1000);
		PORTB = 0x00;
		
		_delay_ms(2000);
		
		//Rotate Motor to 90 degree
		PORTB = 0x04;
		_delay_us(1500);
		PORTB = 0x00;
		
		_delay_ms(2000);
		
		break;
	}
}

void servo2zero(void)
{
	DDRB = 0x04; //Makes PB2 output pin
	PORTB = 0x04;
	while(1)
	{
		//Rotate Motor to 0 degree
		PORTB = 0x04;
		_delay_us(1000);
		PORTB = 0x00;
		
		_delay_ms(2000);
		
		
	}
}